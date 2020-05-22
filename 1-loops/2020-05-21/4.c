#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int cont = 0, contPar = 0, contMaior = 0, soma = 0;
  int numero1 = -1, input;
  float media, percentPar, percentMaior;

  do {
    printf("Para finalizar, digite um negativo.\n");
    printf("Digite um número: ");
    scanf("%d", &input);

    if (input >= 0) { 
      cont++;
      soma += input;
      if ((input % 2) == 0) {
        contPar++;
      }
      if ((numero1 >= 0) && (input > numero1)) {
        contMaior++;
      }
      if (numero1 == -1) {
        numero1 = input;
      }
      printf("\n");
    }
  } while (input >= 0);

  media = (float)soma / (float)cont;
  percentPar = ((float)contPar / (float)cont) * 100.0;
  percentMaior = ((float)contMaior / (float)cont) * 100.0;

  system("pause");
  system("cls");

  printf("--- RESULTADOS ---\n");
  printf("Percentual de pares: %.2f%%\n", percentPar);
  printf("Média dos números: %.2f \n", media);
  printf("Percentual de números maiores que o primeiro: %.2f%%\n", percentMaior);

  return 0;
}