#include <stdio.h>
#include "pratica4.h"

void main (void) {
	int n = 0;
	printf ("Insira um numero inteiro: ");
	scanf ("%i", &n);
	printf ("\nSe 0, impar, se 1, par: %i", ehpar(n));
}