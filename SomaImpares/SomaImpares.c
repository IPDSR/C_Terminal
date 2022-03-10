#include <stdio.h>
#include "pratica4.h"

void main (void){
	int N=0;
	printf ("Digite um  numero inteiro: ");
	scanf ("%i", &N);
	printf ("\nA soma dos numeros de 0 a n eh: %i", somaImpares(N));
}