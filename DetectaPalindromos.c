#include <stdio.h>
#include <math.h>

void main (void){
	char linha[128];
	char inversa[128];
	int i = 0;
	int n=0;
	int k=0;
	printf("digite uma palavra:\n");
	fgets(linha, 128, stdin);
	while (linha[i] != '\0' && linha[i] !='\n') {
		if (linha[i] >= 97 && linha[i] <= 122){
		linha[i] = linha[i] - 32;
		}
		i++;
	}
	i--;
	while (i>=0){
		inversa[n]=linha[i];
		n++;
		i--;

	}
	inversa[n] = '\0';
	printf ("Inversa: %s\n", inversa);
	for (int p=0; p < n; p++){
		if (inversa[p] == linha[p]){
			k++;
		}
	}
	if (k == (n)) {
		printf("Eh um palindromo");
	}
	else
		printf("Nao eh um palindromo");
}