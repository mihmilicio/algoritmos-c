#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcularFatorial()
{
  int fat, res;
  printf("/**** FATORIAL ****/\n\n");
  printf("Insira o numero que deseja obter o fatorial: ");
  scanf("%d", &fat);

  res = fat;
  for (int i = fat - 1; i >= 1; i--)
  {
    res = res * i;
    printf("%d", i);
  }

  printf("\nO fatorial de %d e: %d\n", fat, res);

  system("pause");
  system("cls");
}

void calcularExponenciacao()
{
  int base, exp, res;
  printf("/**** EXPONENCIACAO ****/\n\n");
  printf("Insira a base: ");
  scanf("%d", &base);
  printf("Insira o expoente: ");
  scanf("%d", &exp);

  res = (int)pow(base, exp);
  printf("\n%d ^ %d = %d\n", base, exp, res);

  system("pause");
  system("cls");
}

void calcularPorcentagem()
{
  int n, percent;
  float dec_percent, res;
  printf("/**** PORCENTAGEM ****/\n\n");
  printf("Insira o numero total: ");
  scanf("%d", &n);
  printf("Insira o percentual que deseja calcular: ");
  scanf("%d", &percent);

  dec_percent = (float)percent / (float)100;
  res = (float)n * (float)dec_percent;
  printf("\n%d%% de %d = %f\n", percent, n, res);

  system("pause");
  system("cls");
}

void calcularAreaTriangulo()
{
  float b, h, res;
  printf("/**** AREA DO TRIANGULO ****/\n\n");

  printf("Insira a base: ");
  scanf("%f", &b);
  printf("Insira a altura: ");
  scanf("%f", &h);

  res = (b * h) / 2;
  printf("\nArea do triangulo retangulo %.2f x %.2f = %f\n", b, h, res);

  system("pause");
  system("cls");
}

int main()
{
  int option;

  do
  {
    do
    {
      printf("Bem vindo a calculadora avancada!\n\n");
      printf("/**** MENU ****/\n");
      printf("1 - Fatorial\n");
      printf("2 - Exponenciacao\n");
      printf("3 - Porcentagem\n");
      printf("4 - Area do triangulo\n");
      printf("5 - Sair\n");
      printf("\nEscolha o que deseja fazer: ");
      scanf("%d", &option);

      if (option < 1 || option > 5)
      {
        printf("\tOpcao invalida\n\n");
      }

      if (option != 5)
      {
        system("pause");
        system("cls");
      }

    } while (option < 1 || option > 5);

    switch (option)
    {
    case 1:
      calcularFatorial();
      break;
    case 2:
      calcularExponenciacao();
      break;
    case 3:
      calcularPorcentagem();
      break;
    case 4:
      calcularAreaTriangulo();
      break;
    default:
      break;
    }

  } while (option != 5);

  printf("\nFim do programa!");
}