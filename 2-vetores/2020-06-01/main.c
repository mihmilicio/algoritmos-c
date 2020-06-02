#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() { 
  int jogadasPC[10];
	char timeEscolhido; //I= ímpar, P= par
  int jogada, soma; // 1 <= x <= 10
  int jogarNovamente; //1 = sim
  int countPC = 0, countUser = 0;

	// Use current time as 
	// seed for random generator 
	srand(time(0)); 

  do {

    printf("Partida iniciada!\n");
    printf("O computador esta escolhendo suas jogadas...\n");

    // fill PC choices with random numbers
    for (int i = 0; i < 10; i++) { 
      // rand() % (max_number + 1 - minimum_number) + minimum_number
      jogadasPC[i] = (rand() % (10 - 1 + 1)) + 1;
    }

    printf("O computador está pronto para jogar!\n");

    for (int round = 0; round < 10; round++) { // 10 rodadas
      printf("\n\n");
      printf("--- Rodada %d ---\n", round + 1);

      // user chooses its team for the round
      do {
        printf("P - Par\nI - Ímpar\n");
        fflush(stdin);
        printf("Escolha seu time da rodada: ");
        scanf("%c", &timeEscolhido);

        if (timeEscolhido == 'P' || timeEscolhido == 'I') {
          printf("Time escolhido: ");
          if (timeEscolhido == 'P') {
            printf("Par! \n");
          } else {
            printf("Ímpar! \n");
          }
        } else {
          printf("Escolha um time válido! Digite P ou I\n");
        }
      } while ((timeEscolhido != 'P') && (timeEscolhido != 'I'));

      // get user number choice for the round
      do {
        printf("\n");
        printf("Digite sua jogada - entre 1 e 10: ");
        fflush(stdin);
        scanf("%d", &jogada);

        if (jogada < 1) {
          printf("O numero minimo para jogar e 1\n");
        } else if (jogada > 10) {
          printf("O numero maximo para jogar e 10\n");
        }
      } while (jogada < 1 || jogada > 10);


      printf("O computador escolheu %d\n", jogadasPC[round]);
      soma = jogadasPC[round] + jogada;

      if (soma % 2 == 0) {
        if (timeEscolhido == 'P') {
          printf("VOCÊ venceu esta rodada!\n");
          countUser++;
        } else {
          printf("Você perdeu nesta rodada :c\n");
          countPC++;
        }
      } else {
        if (timeEscolhido == 'I') {
          printf("VOCÊ venceu esta rodada!\n");
          countUser++;
        } else {
          printf("Você perdeu nesta rodada :c\n");
          countPC++;
        }
      }

      printf("\n\n");
      system("pause");
      system("cls");
    } // end "round" for

    printf("Fim de jogo\n");
    printf("--- RESULTADOS ---\n");
    printf("Voce: %d\nPC: %d\n", countUser, countPC);
    if (countUser > countPC) {
      printf("Parabens! Voce ganhou o jogo!\n");
    } else if (countPC > countUser) {
      printf("Que pena... Voce perdeu, o PC ganhou...\n");
    } else {
      printf("Empate!\n");
    }

    printf("\n\n");
    printf("Pressione 1 para jogar novamente, ou qualquer tecla para encerrar.\n");
    printf("Deseja jogar novamente? ");
    scanf("%d", &jogarNovamente);
    system("cls");

  } while (jogarNovamente == 1);	 

	return 0; 
} 
