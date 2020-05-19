#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int idade;
  int cont = 0, infA = 0, infB = 0, juvA = 0, juvB = 0, adu = 0;

  do {
    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5) { //idade válida
      cont++;

        if (idade >= 18) {
          adu++;
          char cat[10] = "Adulto";
          printf("Inserido na categoria 'Adulto'\n");
        } else if (idade >= 14) {
          juvB++;
          printf("Inserido na categoria 'Juvenil B'\n");
        } else if (idade >= 11) {
          juvA++;
          printf("Inserido na categoria 'Juvenil A'\n");
        } else if (idade >= 8) {
          infB++;
          printf("Inserido na categoria 'Infantil B'\n");
        } else {
          infA++;
          printf("Inserido na categoria 'Infantil A'\n");
        }

    } else if (idade > 0) {
      printf("Infelizmente você é muito novo para uma de nossas categorias...\n");
    } else if (idade < 0) {
      printf("Idade não pode ser negativa...\n");
    }
  } while (idade != 0);

  printf("\nCadastros encerrado");
  system("cls"); //limpa a tela

  printf("Total de nadadores: %d\n\n", cont);
  printf("Categoria  | Qtde\n");
  printf("-----------|-----\n");
  printf("Infantil A | %d\n", infA);
  printf("Infantil B | %d\n", infB);
  printf("Juvenil A  | %d\n", juvA);
  printf("Juvenil B  | %d\n", juvB);
  printf("Adulto     | %d\n", adu);

  return 0;
}