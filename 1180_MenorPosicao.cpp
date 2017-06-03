#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	int vetor[999];
	int n, i, menor, posicao = 0;
	
	scanf("%i", &n); 
	
	for (i = 0; i < n; i++) {

		scanf("%i", &vetor[i]);
		
		if (i == 0) {
			menor = vetor[i];
		}
		else {
			if (vetor[i] < menor) {
				menor = vetor[i];
				posicao = i;
			}
		}
	}	

	printf("Menor valor: %i\n", menor);
	printf("Posicao: %i\n", posicao);

	system("pause");

}
