#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int arraySize = 15;
  float soma = 0;
  float notas[arraySize];
  float media;
  float maior[2] = {0, 0};
  float menor[2] = {0, 10000};

  for (int i = 0; i < arraySize; i++) {
    printf("Insira a nota do aluno %d: ", i);
    scanf("%f", &notas[i]);
    soma += notas[i];
    if (notas[i] > maior[1]) {
      maior[0] = (float)i;
      maior[1] = notas[i];
    }
    if (notas[i] < menor[1]) {
      menor[0] = (float)i;
      menor[1] = notas[i];
    }
  }

  media = (float)soma / (float)arraySize;

  printf("Média: %f\n", media);
  printf("Maior nota é %.2f do aluno %.0f \n", maior[1], maior[0]);
  printf("Menor nota é %.2f do aluno %.0f \n", menor[1], menor[0]);

  return 0;
}