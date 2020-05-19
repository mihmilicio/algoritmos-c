#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char nome[30], endereco[60];
  int idade;

  printf("Exemplo de leitura de string:\n");

  printf("Informe a idade: ");
  scanf("%d", &idade);

  printf("Informe o nome: ");
  fflush(stdin); // limpa o buffer de entrada; necessário para ler strings depois de qualquer input
  gets(nome); //leitura própria e exclusiva para strings

  printf("\n-------\n");
  printf("Exemplo de atribuição de valor para string:\n");

  strcpy(endereco, "Rua da Paz, 123");

  printf("Seu endereco: %s", endereco);

  return 0;
}