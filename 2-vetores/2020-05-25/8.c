#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 10;
  int a[10] = { 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
  int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
  int c[10];

  for (int i = 0; i < arraySize; i++) {
    c[i] = a[i] + b[i];
  }

  printf("c = { ");
  for (int i = 0; i < arraySize; i++) {
    if (i == arraySize - 1) { //última iteração
      printf("%d }", c[i]);
    } else {
      printf("%d, ", c[i]);
    }    
  }

  return 0;
}