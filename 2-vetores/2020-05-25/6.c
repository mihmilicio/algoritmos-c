#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 10;
  int soma = 0;
  int val[arraySize];

  for (int i = 0; i < arraySize; i++) {
    printf("Digite um número para a pos. %d: ", i);
    scanf("%d", &val[i]);
    if (val[i] > 0 && (i % 2 == 0)) {
      soma += val[i];
    }    
  }

  printf("Soma = %d\n", soma);

  return 0;
}