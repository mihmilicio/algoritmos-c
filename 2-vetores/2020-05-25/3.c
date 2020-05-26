#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 10;
  int val[arraySize];
  int dobro[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Digite um número para a pos. %d: ", i);
    scanf("%d", &val[i]);
    dobro[i] = val[i] * 2;
  }

  printf("Vetor dobrado: \n");
  printf("|");
  for (int i = 0; i < arraySize; i++) {
    printf(" %d |", dobro[i]);
  }

  return 0;
}