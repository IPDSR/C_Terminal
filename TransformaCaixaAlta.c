#include <stdio.h>
#include <math.h>

void main (void){
	char linha[128];
	int i = 0;
	printf("digite uma linha:\n");
	fgets(linha, 128, stdin);
	while (linha[i] != '\0' && linha[i] !='\n') {
		if (linha[i] >= 97 && linha[i] <= 122){
		linha[i] = linha[i] - 32;
		}
		i++;
	}
	printf ("Linha: %s", linha);
}