#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 5;
  int val[arraySize];
  int n;

  for (int i = 0; i < arraySize; i++) {
    printf("Digite um numero para a pos. %d: ", i);
    scanf("%d", &val[i]);
  }

  printf("\nQual e o numero de corte? ");
  scanf("%d", &n);

  printf("Indices com valores inferiores a n: \n\n");
  printf("| Indice | Valor |\n");
  printf("|--------|-------|\n");
  for (int i = 0; i < arraySize; i++) {
    if (val[i] < n) {
      printf("| %d      | %d     |\n", i, val[i]);
    }
  }

  return 0;
}