#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float custo_fabrica, preco, distribuidor, impostos;
	float soma = 0, media = 0;
	int cont = 0;

	do {

		printf("\nCusto de fabrica: R$ ");
		scanf("%f", &custo_fabrica);

		if (custo_fabrica > 0) {
			distribuidor = custo_fabrica * 0.28;
			impostos = custo_fabrica * 0.45;
			preco = custo_fabrica + distribuidor + impostos;

			cont++;
			soma += preco;
			
			printf("Custo final para o cliente: R$ %.2f \n", preco);
		} else if (custo_fabrica < 0) {
			printf("Custo não pode ser negativo.\n");
		}		
		
	} while (custo_fabrica != 0);

	// 0 digitado
	printf("\n\nTotal de carros avaliados: %i", cont);
	printf("\nSoma total do custo final: %.2f", soma);

	media = soma / cont;
	printf("\nMédia do valor dos automóveis: %.2f", media);
	
	
	return 0;
}
