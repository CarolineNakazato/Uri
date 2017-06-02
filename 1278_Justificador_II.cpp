#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char texto[100][52], aux[52];
	int n, tamanho, tam2, dir = 0, qtdEsp = 0, i, j, flag;
	
	
	scanf("%d", &n);

	while (n != 0){

		getchar();

		for (tam2 = 0; tam2 < n; tam2++){

			fgets(texto[tam2], 52, stdin);

			tamanho = strlen(texto[tam2]);

			j = 0;
			flag = 0;

			if (texto[tam2][0] != ' ')
			{
				aux[j] = texto[tam2][0];
				flag = 1;
				j++;
			}

			for (i = 1; i < tamanho; i++){
				if (texto[tam2][i] != ' ' || (texto[tam2][i + 1] != ' ' && texto[tam2][i + 1] != '\n'&& flag != 0))
				{
					aux[j] = texto[tam2][i];
					flag = 1;
					j++;
				}
			}

			aux[j] = '\0';

			strcpy(texto[tam2], aux);
			tamanho = j;

			if (tamanho > dir)
				dir = tamanho;
		}

		for (i = 0; i < tam2; i++){

			qtdEsp = dir - strlen(texto[i]);

			for (j = 0; j < qtdEsp; j++)
				putchar(' ');

			printf("%s", texto[i]);
		}

		dir = 0;

		scanf("%d", &n);

		if (n != 0)
			printf("\n");
	}

	system("pause");

}
