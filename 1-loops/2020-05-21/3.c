#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int x;
  float soma = 0;

  printf("Insira um x: ");
  scanf("%d", &x);

  for (int i = 1; i <= 25; i++) {
    int exp = 25 - (i - 1);
    soma += (pow(x, exp) / (float)i);
  }

  printf("S = %f", soma);

  return 0;
}