#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float soma = 0;

  for (int i = 1, j = 1000; (i <= 50) && (j >= (1000 - 3*(50 - 1))); i++, j -= 3) {
    if ((i % 2) == 0) {
      soma -= ((float)j / (float)i);
    } else {
      soma += ((float)j / (float)i);
    }
  }

  printf("S = %f", soma);

  return 0;
}