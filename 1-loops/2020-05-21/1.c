#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float soma = 0;

  for (int i = 1; i <= 50; i++) {
    int topNumber = 1 + 2*(i - 1);

    soma += ((float)topNumber / (float)i);
  }

  printf("S = %f", soma);

  return 0;
}