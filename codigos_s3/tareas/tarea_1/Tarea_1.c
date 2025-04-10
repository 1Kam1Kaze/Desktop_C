
// INFO 1. Propósito

// INFO El presente trabajo tiene por objetivo ejercitar el diseño de la lógica de programación en lenguajes de programación imperativos.

// INFO 2. Enunciado

// INFO Diseñe, construya y pruebe un programa que obtenga sólo el primer número primo de un intervalo (use solamente secuencias, if y while).

// INFO 3. Recomendaciones

// INFO Se recomienda hacer un análisis de la situación y condiciones necesarias para resolver el problema. El código producido debe reflejar las conclusiones y supuestos definidos. La programación se hará en cualquier lenguaje que sea apropiado: C, C++, Pascal, Python, Rust, …

// INFO 4. Entrega

// INFO La entrega se hará por correo electrónico a hmelendezc@docente.uss.cl. El sujeto del correo será PP-TA01-Flores-Flores.

#include <stdio.h>

// funcion para ver si es primo o no

int func_primo(int p) {
    int i;
    // menores o = 1 no son primos
    if (p <= 1) {
        return 0;
    }
    // Si son divisible tampoco son primos
    for (i = 2; i < p; i++) {
        if (p % i == 0) {
            return 0;       }
    }
    // si no ocurre ninguno de los anteriores si es primo
    return 1;
}

// funcion principal q pide datos

int main() {
    //Datos
    int numero1, numero2, i;
    printf("\nIngrese el límite inferior del intervalo: ");
    scanf("%d", &numero1);
    printf("\nIngrese el límite superior del intervalo: ");
    scanf("%d", &numero2);
    //Usamos la funcion de primo para ver si es o no
    for (i = numero1; i <= numero2; i++) {
        if (func_primo(i)) {
            printf("\nEl primer número primo en el intervalo es: %d\n\n", i);
            return 0;        }
    }
    //En caso de q no haya ningun primo
    printf("No se encontró ningún número primo en el intervalo.\n\n");
    return 0;
}

