#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {

	int par[5], impar[5];
	int n, v, aux, i = 0, j = 0;

	for (n = 0; n < 15; n++) {
		
		scanf("%i", &v);

		if (v%2==0) {
			if (i == 5) {
				for (aux = 0; aux < 5; aux++) {
					printf("par[%i] = %i\n", aux, par[aux]);
				}
				i = 0;
			}
			
			par[i] = v;
			i++;
			
		}
		else {
			if (j == 5) {
				for (aux = 0; aux < 5; aux++) {
					printf("impar[%i] = %i\n", aux, impar[aux]);
				}
				j = 0;
			}
	
			impar[j] = v;
			j++;
			
		}
	}	
	
	for (aux = 0; aux < j; aux++) {
		printf("impar[%i] = %i\n", aux, impar[aux]);
	}

	for (aux = 0; aux < i; aux++) {
		printf("par[%i] = %i\n", aux, par[aux]);
	}
	
	system("pause");

}
