#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "colors.c"

int main()
{
  int tabuleiro[4][4] = {
      {1, 8, 6, 3},
      {4, 3, 5, 1},
      {2, 2, 7, 8},
      {6, 4, 7, 5}};
  int descobertas[4][4] = {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}};
  int chosen1[2];
  int chosen2[2];
  int jogarNovamente = 0;
  int paresDescobertos = 0;
  int jogadas = 0;
  int validCoordinate = 0;

  void printBoard(int chosen1[2], int chosen2[2])
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        int shouldShow = 0;
        if (chosen1)
        {
          if (i == chosen1[0] && j == chosen1[1])
          {
            yellow();
            shouldShow = 1;
          }
        }
        if (chosen2)
        {
          if (i == chosen2[0] && j == chosen2[1])
          {
            yellow();
            shouldShow = 1;
          }
        }

        if (descobertas[i][j] == tabuleiro[i][j])
        {
          cyan();
          shouldShow = 1;
        }

        if (shouldShow)
        {
          printf("%d  ", tabuleiro[i][j]);
        }
        else
        {
          printf("0  ");
        }

        if (j == 3)
        {
          printf("\n");
        }

        reset();
      }
    }
  }

  int validatePosition(int pos, int direction, int giveFeedback)
  { //0 = linha; 1 = coluna
    if (pos < 0 || pos > 3)
    { //erro
      if (giveFeedback)
      {
        red();

        if (direction == 0)
        {
          printf("A linha deve ser entre 0 e 3!\n");
        }
        else if (direction == 1)
        {
          printf("A coluna deve ser entre 0 e 3!\n");
        }

        reset();
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }

  do
  {
    reset();
    printf("/**** JOGO DA MEMORIA ****/\n\n");

    do
    {
      printBoard(0, 0);
      printf("\nEscolha a primeira carta que deseja virar: \n");
      validCoordinate = 0;
      do
      {
        do
        {
          printf("\tLinha: ");
          scanf("%d", &chosen1[0]);
          validatePosition(chosen1[0], 0, 1);
        } while (!validatePosition(chosen1[0], 0, 0));
        do
        {
          printf("\tColuna: ");
          scanf("%d", &chosen1[1]);
          validatePosition(chosen1[1], 0, 1);
        } while (!validatePosition(chosen1[1], 0, 0));

        if (descobertas[chosen1[0]][chosen1[1]] == 0)
        {
          validCoordinate = 1;
        }
        else
        {
          red();
          printf("Carta {%d, %d} ja foi descoberta. Escolha outra.\n", chosen1[0], chosen1[1]);
          reset();
        }
      } while (!validCoordinate);
      printBoard(chosen1, 0);
      system("pause");
      system("cls");

      printBoard(chosen1, 0);
      printf("\nEscolha a segunda carta que deseja virar: \n");
      validCoordinate = 0;
      do
      {
        do
        {
          printf("\tLinha: ");
          scanf("%d", &chosen2[0]);
          validatePosition(chosen2[0], 0, 1);
        } while (!validatePosition(chosen2[0], 0, 0));
        do
        {
          printf("\tColuna: ");
          scanf("%d", &chosen2[1]);
          validatePosition(chosen2[1], 1, 1);
        } while (!validatePosition(chosen2[1], 1, 0));

        if (descobertas[chosen2[0]][chosen2[1]] == 0)
        {
          if (chosen1[0] != chosen2[0] || chosen1[1] != chosen2[1])
          {
            validCoordinate = 1;
          }
          else
          {
            red();
            printf("Segunda carta nao pode ser igual a primeira. Escolha outra.\n");
            reset();
          }
        }
        else
        {
          red();
          printf("Carta {%d, %d} ja foi descoberta. Escolha outra.\n", chosen2[0], chosen2[1]);
          reset();
        }
      } while (!validCoordinate);

      printBoard(chosen1, chosen2);

      if (tabuleiro[chosen1[0]][chosen1[1]] == tabuleiro[chosen2[0]][chosen2[1]])
      {
        paresDescobertos++;
        int num = tabuleiro[chosen1[0]][chosen1[1]];
        descobertas[chosen1[0]][chosen1[1]] = num;
        descobertas[chosen2[0]][chosen2[1]] = num;
        cyan();
        printf("Voce encontrou um par!\n");
        reset();
      }
      else
      {
        yellow();
        printf("Que pena! Nao e um par :(\n");
        reset();
      }
      jogadas++;
      system("pause");
      system("cls");

    } while (paresDescobertos < 8);

    printBoard(0, 0);
    cyan();
    printf("\nVoce venceu em %d jogadas!\n", jogadas);
    reset();

    system("pause");
    system("cls");
    printf("Digite 1 para jogar novamente ou 0 para encerrar.\n");
    scanf("%d", &jogarNovamente);
    system("cls");

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        descobertas[i][j] = 0;
      }
    }

  } while (jogarNovamente == 1);

  return 0;
}