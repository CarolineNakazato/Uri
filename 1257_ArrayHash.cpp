#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {

	char palavra[51];
	char letras[] = { 'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R','S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '/0' };
	int  qtd, n, elemento, hash, i, j;

	scanf("%i", &qtd);
	
	while (qtd > 0) {
		hash = 0;
		elemento = 0;
		scanf("%i", &n);

		while (n > 0) {
			fflush(stdin);
			getchar();
			scanf("%s", palavra);
		
			for (i = 0; i < strlen(palavra); i++) {
				for (j = 0; j < 26; j++) {
					if (palavra[i] == letras[j]) {
						hash += elemento + i + j;
					}
				}
			}
			n--;
			elemento++;
		}
		printf("%i\n", hash);
		qtd--;
	}

	system("pause");

}
