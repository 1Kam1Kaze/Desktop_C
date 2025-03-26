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

// #include <stdio.h>
//
// int main() {
//   int num, i,numeros[100];
//
//   // Funcion que calcula el promedio de una array de enteros
//   float media (int n, int A[]) {
//     int i, suma;
//     suma = 0;
//     for (i = 0; i < n; i++)
//       suma += A[i];
//     return (float) suma / n;
//   }
//
//   // Ingreso de datos 
//   printf("Cantidad de numeros: ");
//   scanf("%d", &num);
//   for (i = 0; i < num; i++) {
//       printf("Ingresa el numero %d: ", i + 1);
//       scanf("%i", &numeros[i]);
//   }
//
//   // Se despliega el resultado
//   printf("El promedio calculado es: %.2f\n", media(num,numeros));
//   return 0;
// }

// INFO Registros en C

#include <stdio.h>
#include <string.h>

struct Libro {
  int idlibro;
  char titulo[100];
  char autor[100];
  int fecha;
};

int main() {
  // Se declara una variable de tipo libro
  struct Libro libro1;

  // Se da valores a los campos de estructura
  libro1.idlibro = 100221300;
  strcpy(libro1.titulo, "Cien años de soledad");
  strcpy(libro1.autor, "Gabriel García Márquez");
  libro1.fecha = 1967;

  // Impresion de la información del libro
  printf("Identificacion : %d\n", libro1.idlibro);
  printf("Título: %s\n", libro1.titulo);
  printf("Autor : %s\n", libro1.autor);
  printf("Fecha : %d\n", libro1.fecha);

  // Termino
  return 0;
}
