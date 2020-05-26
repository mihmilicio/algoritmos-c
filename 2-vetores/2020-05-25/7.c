#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 5;
  int soma = 0;
  int val1[arraySize], val2[arraySize];
  int isEqual = 0; // 0 = not set, 1 = not equal, 2 = equal

  for (int i = 0; i < arraySize; i++) {
    printf("Digite pos. %d, vetor 1: ", i);
    scanf("%d", &val1[i]);   
  }
  for (int i = 0; i < arraySize; i++) {
    printf("Digite pos. %d, vetor 2: ", i);
    scanf("%d", &val2[i]);   
  }

  
  for (int i = 0; i < arraySize; i++) {
    if (isEqual != 1) {
      if (val1[i] == val2[i]) {
        isEqual = 2;
      } else {
        isEqual = 1;
      }
    }
  }

  if (isEqual == 1) {
    printf("Os vetores são diferentes.");
  } else {
    printf("Os vetores são iguais.");
  }

  return 0;
}