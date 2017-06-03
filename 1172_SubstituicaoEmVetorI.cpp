#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	int vetor[10], n;

	for (n = 0; n < 10; n++) {
		scanf("%i", &vetor[n]);
		if (vetor[n]<1) {
			vetor[n] = 1;
		}
		printf("vetor[%i] = %i\n", n, vetor[n]);
	}

	system("pause");
}