#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {

	char vertebrado[13], reino[9], alimento[10];
  
	scanf("%s", &vertebrado); 
	scanf("%s", &reino);
	scanf("%s", &alimento);

	if (strcmp(vertebrado, "vertebrado") == 0) {
		if (strcmp(reino, "ave") == 0) {
			if (strcmp(alimento, "carnivoro") == 0) {
				printf("aguia\n");
			}
			else {
				printf("pomba\n");
			}
		}
		else {
			if (strcmp(alimento, "onivoro") == 0) {
				printf("homem\n");
			}
			else {
				printf("vaca\n");
			}
			
		}
	}
	else {
		if (strcmp(reino, "inseto") == 0) {
			if (strcmp(alimento, "hematofago") == 0) {
				printf("pulga\n");
			}
			else {
				printf("largata\n");
			}
		}
		else {
			if (strcmp(alimento, "hematofago") == 0) {
				printf("sanguessuga\n");
			}
			else {
				printf("minhoca\n");
			}

		}
	}

	system("pause");

}
