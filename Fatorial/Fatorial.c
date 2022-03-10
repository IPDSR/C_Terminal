#include <stdio.h>
#include "pratica4.h"

void main (void){
	int N=0;
	printf ("Digite um  numero inteiro: ");
	scanf ("%i", &N);
	printf ("\nO fatorial dos numeros de 0 a n eh: %lf", fatorial(N));
}