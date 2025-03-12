#include <stdio.h> // include es como el import y el stdio.h es como la libreria de c

// Estructura basica de un programa

// int main() {
//   printf("\nHello world!\n");
//   return 0;
// }

// Estructura basica de un programa

// int main() {
//   double distancia, velocidad, tiempo;
//   velocidad = 120;
//   tiempo = 2.5;
//   distancia = velocidad * tiempo;
//   printf("%f", distancia);
// }

// Control de flujo

// int main() {
//   int suma;
//   suma = 2 + 4 + 6 + 8;
//   printf("%d", suma);
// }

// Repeticion (while)

// int main() {
//   int suma, númeroPar;
//   suma = 0;
//   númeroPar = 2;
//     while (númeroPar < 10000) {
//     suma += númeroPar;
//     númeroPar +=2;
//   }
//   printf("%d", suma);
// }

// Selecion (if)

// int main() {
//   int número, suma;
//   número = 1;
//   suma = 0;
//   while (número <= 9999) {
//     if (número % 2 == 0) {
//       suma += número;
//     }
//     número +=1;
//   }
//   printf("%d", suma);
// }

// Esquema de recorrido y busqueda 

// #include <stdio.h>
//
// int main() {
//     int número = 760;
//     while (número <= 800 && número % 13 != 0)
//         número++;
//     if (número <= 800)
//         printf("%d", número);
//     else
//         printf("No se ha encontrado");
// 

// Buscar primos en un intervalo

// int main() {
//   int inicio,fin;
//   int número,divisor;
//
//   inicio = 10; fin = 20;
//   printf("Buscando primos entre %d y %d\n", inicio, fin);
//
//   for (número = inicio; número <= fin; número++) {
//     divisor = 2;
//     while (número % divisor != 0 && divisor < número)
//       divisor ++;
//
//     if (divisor == número)
//       printf(" *** %d\n", número);
//   }
// }

//Buscando primos en un intervalo

int main() {
    int inicio = 10, fin = 20;  // Establecemos el intervalo
    int número, divisor;

    // Bucle 'for' que recorre los números del intervalo [inicio, fin]
    for (número = inicio; número <= fin; número++) {
        printf("\n\n*** Comenzando con el número: %d ***\n", número);

        divisor = 2;  // Iniciamos divisor desde 2

        // Bucle 'while' que verifica si el número es divisible por algún divisor
        while (número % divisor != 0 && divisor < número) {
            printf("Divisor: %d, %d %% %d = %d\n", divisor, número, divisor, número % divisor);
            divisor++;  // Incrementamos divisor
        }

        // Aquí verificamos si 'divisor' llegó a ser igual al número
        if (divisor == número) {
            printf("¡%d es primo! (divisor == número)\n", número);
        } else {
            printf("¡%d NO es primo! (divisor encontrado: %d)\n", número, divisor);
        }
    }
}

// Funciones

//












