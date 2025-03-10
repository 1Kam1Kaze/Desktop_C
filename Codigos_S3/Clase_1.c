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

int main() {
  int suma, númeroPar;
  suma = 0;
  númeroPar = 2;
    while (númeroPar < 10000) {
    suma += númeroPar;
    númeroPar +=2;
  }
  printf("%d", suma);
  printf("\n");
  printf("%d", númeroPar);
}

// Selecion (if)

// int main() {
//   int número, suma;
//   número = 1;
//   suma = 0;
//   while (número)
// }
