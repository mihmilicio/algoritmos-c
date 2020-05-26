#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 5;
  int val[arraySize];
  int n, cont = 0;

  for (int i = 0; i < arraySize; i++) {
    printf("Digite um numero para a pos. %d: ", i);
    scanf("%d", &val[i]);
  }

  printf("\nQual e o numero para buscar? ");
  scanf("%d", &n);

  
  printf("| Indice |\n");
  printf("|--------|\n");
  for (int i = 0; i < arraySize; i++) {
    if (val[i] == n) {
      printf("| %d      |\n", i);
      cont++;
    }
  }
  printf("\nQuantidade de aparicoes de n: %d", cont);

  return 0;
}