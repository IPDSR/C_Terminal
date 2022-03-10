#include <stdio.h>
#include "pratica4.h"

void main (void) {
	float h=0;
	char sexo;
	printf("Insira sua altura: ");
	scanf ("%f", &h);
	printf ("Insira seu sexo biologico: ");
	scanf (" %c", &sexo);	
	printf ("Seu peso ideal eh: %f", pesoIdeal(h, sexo));
}