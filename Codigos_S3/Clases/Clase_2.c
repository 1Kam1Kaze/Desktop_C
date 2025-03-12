
#include <stdio.h>

int main () {
  float grupo[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
  float max = grupo[0];
  int i;
  for (i=0; i<10; i++) {
    if (grupo[i] > max) {
      max = grupo[i];
    }
  }
  printf("El valor maximo es %.2f\n", max);
}
