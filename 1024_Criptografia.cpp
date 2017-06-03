#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {

	char palavra[1001], aux;
	int  qtd, n, hash, i, j;

	scanf("%i", &qtd);
	
	while (qtd > 0) {
		
		fflush(stdin);
		getchar();

		scanf("[^\n]", palavra);

		//soma 3 letras
		for (n = 0; n < strlen(palavra);  n++) {
			if (((palavra[n] >= 65) && (palavra[n] <= 90)) || ((palavra[n] >= 97) && (palavra[n] <= 122))) {
				palavra[n] += 3;
			}
		}
    
		//inverte
		for (n = 0; n < strlen(palavra)/2; n++) {
			aux = palavra[n];
			palavra[n] = palavra[strlen(palavra)-1 - n];
			palavra[strlen(palavra)-1 - n] = aux;

		}
		
		//apartir da metade subtrai uma letra
		for (n = strlen(palavra)/ 2; n < strlen(palavra); n++) {
			palavra[n] -= 1;

		}

		printf("%s\n", palavra);
		qtd--;
	}

	system("pause");

}
