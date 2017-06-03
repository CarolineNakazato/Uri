#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	double vetor[61];
	int n, v;
	
	vetor[0] = 0.0;
	vetor[1] = 1.0;

	for (n = 2; n < 61; n++) {
		vetor[n] = vetor[n - 1] + vetor[n - 2];
	}
	
	scanf("%i", &n);

	while(n>0){
		scanf("%i", &v);

		printf("Fib(%i) = %.lf\n", v, vetor[v]);
		n--;
	}

	system("pause");
}