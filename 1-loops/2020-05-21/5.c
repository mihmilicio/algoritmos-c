#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int op, contImp = 0, contPar = 0, val;

  do {
    system("cls");
    printf("Menu: \n");
    printf("1. Digitar um número ímpar\n");
    printf("2. Digitar um número par\n");
    printf("3. Sair\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      val = 0;
      while ((val % 2) != 1) { //enquanto não for ímpar
        printf("Digite um número ímpar para voltar ao menu: ");
        scanf("%d", &val);
      }
      contImp++;
      system("pause");
      break;
    case 2:
      val = 1;
      while ((val % 2) != 0) { //enquanto não for par
        printf("Digite um número par para voltar ao menu: ");
        scanf("%d", &val);
      }
      contPar++;
      system("pause");
      break;
    case 3: 
      printf("Calculando...\n");
      system("pause");
      break;
    default:
      printf("Opção inválida, tente novamente.\n");
      system("pause");
      break;
    }


  } while (op != 3);

  system("cls");
  printf("--- RESULTADOS ---\n");
  printf("Qtde números ímpares digitados na op. 1: %d\n", contImp);
  printf("Qtde números pares digitados na op. 2: %d\n", contPar);

  return 0;
}