// INFO Problema propuesto: Completar el programa y ejecutarlo con valores de n entre 1 y 20. ¿Que pasa con valores superiores?

#include <stdio.h>

int main() {
  int n, i;
  unsigned long long factorial = 1; // Es un tipo de dato en C que permite almacenar numeros muy grandes solo positivos

  printf("Escribe el número maximo:");
  scanf("%d", &n);

  if (n < 0) {
    printf("El factorial no esta definido para numeros negativos ni cero.\n");
  } else if ( n == 0 || n == 1) {
    printf("El factorial de %d es 1. \n", n);
  } else {
    for (i = 2; i <= n; i++) {
      factorial *= i;
    }
  printf("EL factorial de %d es %llu\n", n, factorial);
  }

  return 0;
}

// INFO Problemas con la solución propuesta: Esta propuesta funciona sólo con valores pequeños para n. Esto se debe al crecimiento explosivo del n!. Aunque compacta y elegante, se puede encontrar mejores soluciones para el factorial.






// INFO Problema propuesto: Implemente esta misma versión recursiva en C o C++ y compare los resultados, llevando n al punto en que reciban una respuesta errónea.


