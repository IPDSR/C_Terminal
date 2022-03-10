#include <stdio.h>
#include <math.h>

void main (void){
	int linhas;
	int n=1;
	int colunas=0;
	
	printf("Digite um inteiro: ");
	scanf("%i", &linhas);
	
	while (linhas>0){
		colunas = colunas + 1;
		for (int i = colunas; i>0; i--){
			printf ("%i ", n);
			n++;
		}
		printf("\n");
		linhas--;
	}
}