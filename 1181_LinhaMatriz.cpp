#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {

	double matriz[12][12], soma = 0.0;
	int  linha, i, j;
	char operacao;

	scanf("%i", &linha);

	fflush(stdin);
	getchar();

	scanf("%c", &operacao);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &matriz[i][j]);
			if (i == linha-1) {
					soma += matriz[i][j];
			}
			
		}
	}

	if (operacao == 'S') {
		printf("%.1lf\n", soma);
	}
	else {
		printf("%.1lf\n", soma/12.0);
	}
	

	system("pause");

}
