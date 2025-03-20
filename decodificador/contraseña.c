#include <stdio.h>
#include <string.h>
#include <omp.h>
#include <stdint.h>
#include <stdlib.h>

#define CHAR_START 32  // Primer carácter imprimible en ASCII (espacio)
#define CHAR_END 126   // Último carácter imprimible en ASCII (~)

uint64_t attempt_count = 0;  // Contador global de intentos
int found = 0;  // Variable para detener la búsqueda cuando se encuentra la contraseña

// Función de verificación (cambia la contraseña aquí)
int check(const char *password) {
    return strcmp(password, "12") == 0; // Cambia por la contraseña real
}

// Generar combinaciones usando OpenMP
void generate_passwords(char *current, int length, int max_length) {
    if (found) return; // Si la contraseña ya se encontró, detener

    if (length > 0) {  
        #pragma omp atomic
        attempt_count++; // Incrementar intentos en paralelo

        if (attempt_count % 1000000 == 0) {
            printf("Intentos: %lu, Último intento: %s\n", attempt_count, current);
        }

        if (check(current)) {
            found = 1;
            printf("✅ Contraseña encontrada: %s\n", current);
            printf("🔢 Total de intentos: %lu\n", attempt_count);
            return;
        }
    }

    if (length >= max_length || found) return; // No seguir si ya encontramos

    for (char c = CHAR_START; c <= CHAR_END; c++) {
        current[length] = c;
        current[length + 1] = '\0';  
        generate_passwords(current, length + 1, max_length);
    }
}

// Ejecutar en paralelo con OpenMP
void start_brute_force() {
    int max_length = 1;

    #pragma omp parallel
    {
        while (!found) {
            char *password = (char *)malloc(max_length + 1);
            if (!password) continue; // Evitar errores de memoria
            password[0] = '\0'; 
            
            #pragma omp for schedule(dynamic)
            for (char c = CHAR_START; c <= CHAR_END; c++) {
                password[0] = c;
                password[1] = '\0';
                generate_passwords(password, 1, max_length);
            }

            free(password);
            max_length++; // Aumentar longitud después de cada ronda
        }
    }
}

int main() {
    double start_time = omp_get_wtime(); // Tiempo inicial

    start_brute_force(); // Iniciar búsqueda en paralelo

    double end_time = omp_get_wtime(); // Tiempo final

    printf("🔚 Fin del programa. Total de intentos: %lu\n", attempt_count);
    printf("⏳ Tiempo total: %.2f segundos\n", end_time - start_time);
    return 0;
}

