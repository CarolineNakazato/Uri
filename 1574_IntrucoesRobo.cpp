#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {

	char direcao[9];
	int posicao[100], qtd, n, i, p, volta;

	scanf("%i", &qtd);
	
	while (qtd > 0) {

		i = 0;
		p = 0;
		
		scanf("%i", &n);

		while (n > 0) {

			getchar();
			scanf("%s", direcao);

			if (strcmp(direcao, "LEFT") == 0) {
				p--;
				posicao[i] = -1;
				i++;
			}
			else {
				if (strcmp(direcao, "RIGHT") == 0) {
					p++;
					posicao[i] = 1;
					i++;
				}
				else {
					scanf(" AS %i", &volta);
					p += posicao[volta-1];
					posicao[i] = posicao[volta-1];
					i++;
				}
			}
			n--;

		}
		printf("%i\n", p);
		qtd--;
	}

	system("pause");

}
