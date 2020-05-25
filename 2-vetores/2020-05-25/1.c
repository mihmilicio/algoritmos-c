#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 15;
  int soma = 0;
  int val[arraySize];
  float media;

  for (int i = 0; i < arraySize; i++) {
    printf("Digite um número para a pos. %d: ", i);
    scanf("%d", &val[i]);
    soma += val[i];
  }

  media = (float)soma / (float)arraySize;

  printf("Média: %f\n", media);
  printf("Valores maiores ou iguais à média: \n");
  printf("|");
  for (int i = 0; i < arraySize; i++) {
    if (val[i] >= media ) {
      printf(" %d |", val[i]);
    }
  }

  return 0;
}