#include <stdio.h>

int main() {
    int numero1, numero2, numerofinal, i, primo;

    printf("Ingrese el inicio del intervalo: ");
    scanf("%d", &numero1);
    printf("Ingrese el fin del intervalo: ");
    scanf("%d", &numero2);

    numerofinal = numero1;

    while (numerofinal <= numero2) {
        primo = 1;

        if (numerofinal <= 1) {
            primo = 0;
        } else {
            i = 2;
            while (i * i <= numerofinal) {
                if (numerofinal % i == 0) {
                    primo = 0;
                    break;
                }
                i++;
            }
        }

        if (primo) {
            printf("El primer número primo en el intervalo es: %d\n", numerofinal);
            return 0;
        }

      numerofinal++;
    }

    printf("No se encontraron números primos en el intervalo.\n");

    return 0;
}

