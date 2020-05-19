#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int cod, qtde_produto;
  float preco_un = 0, preco_produto, preco_total = 0;
  int cont_itens = 0, cont_pedidos = 0;

  do {
    printf("Cardápio da lanchonete:\n\n");
    printf("| Especificacao   | Codigo | Preco   |\n");
    printf("|-----------------|--------|---------|\n");
    printf("| Cachorro quente | 100    | R$ 1,20 |\n");
    printf("| Bauru simples   | 101    | R$ 1,30 |\n");
    printf("| Bauru com ovo   | 102    | R$ 1,50 |\n");
    printf("| Hamburguer      | 103    | R$ 1,30 |\n");
    printf("| Cheeseburguer   | 104    | R$ 1,30 |\n");
    printf("| Refrigerante    | 105    | R$ 1,00 |\n");

    printf("\nSelecione 999 para cancelar\n");

    printf("Insira o código de produto: ");
    scanf("%d", &cod);

    switch (cod) {
      case 100:
        preco_un = 1.20;
        printf("Quantos cachorros-quentes? ");
        break;
      case 101:
        preco_un = 1.30;
        printf("Quantos baurus simples? ");
        break;
      case 102:
        preco_un = 1.50;
        printf("Quantos baurus com ovo? ");
        break;
      case 103: 
        preco_un = 1.30;
        printf("Quantos hamburgueres? ");
        break;
      case 104:
        preco_un = 1.30;
        printf("Quantos cheeseburgueres? ");
        break;
      case 105: 
        preco_un = 1;
        printf("Quantos refrigerantes? ");
        break;

      case 999:
        preco_un = 0;
        printf("Pedidos finalizados.\n");
        break;
      
      default:
        preco_un = 0;
        printf("Código inválido.\n");
        break;
    } (cod);

    if (preco_un != 0) { //pedido válido
      scanf("%d", &qtde_produto);
      preco_produto = qtde_produto * preco_un;
      printf("Preço do pedido: R$ %.2f\n", preco_produto);


      cont_itens += qtde_produto;
      cont_pedidos++;
      preco_total += preco_produto;
    }

    system("pause");
    system("cls");

  } while (cod != 999);

  printf("\nQuantidade de pedidos: %d", cont_pedidos);
  printf("\nQuantidade de itens vendidos: %d", cont_itens);
  printf("\nValor total arrecadado: R$ %.2f", preco_total);


  return 0;
}