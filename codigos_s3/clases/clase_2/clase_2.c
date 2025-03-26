// INFO promedio

// #include <stdio.h>
//
// int main() {
//   int numeros[100];
//   int n, i ,suma;
//   float promedio;
//
//   // Ingreso de datos
//   printf("Cantidad de numeros: ");
//   scanf("%d",&n);
//   for (i = 0; i<n; i++) {
//     printf("Ingresa el numero %d: ", i+1);
//     scanf("%d",&numeros[i]);
//   }
//
//   // Calculo del promedio
//   suma = 0;
//   for (i =0; i<n; i++) {
//     suma += numeros[i];
//   promedio = (float) suma / n;
//   }
//
//   // Se despliega el resultado
//   printf("El promedio calculado es: % .2f\n", promedio);
//     return 0;
// }

// INFO promedio v2

#include <stdio.h>

int main() {
  int num, i,numeros[100];

  // Funcion que calcula el promedio de una array de enteros
  float media (int n, int A[]) {
    int i, suma;
    suma = 0;
    for (i = 0; i < n; i++)
      suma += A[i];
    return (float) suma / n;
  }

  // Ingreso de datos 
  printf("Cantidad de numeros: ");
  scanf("%d", &num);
  for (i = 0; i < num; i++) {
      printf("Ingresa el numero %d: ", i + 1);
      scanf("%i", &numeros[i]);
  }

  // Se despliega el resultado
  printf("El promedio calculado es: %.2f\n", media(num,numeros));
  return 0;
}
