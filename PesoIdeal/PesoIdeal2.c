#include <stdio.h>
#include "pratica4.h"

void main (void) {
	float h=0;
	float peso=0;
	char sexo;
	float pesoideal = 0;
	
	printf("Insira sua altura: ");
	scanf ("%f", &h);
	
	printf ("Insira seu peso: ");
	scanf (" %f", &peso);
	
	printf ("Insira seu sexo biologico: ");
	scanf (" %c", &sexo);	
	
	pesoideal = pesoIdeal(h, sexo);		
	
	if (peso>pesoideal){
		printf ("Voce precisa perder: %fkg", peso-pesoideal);
	}
	if (peso<pesoideal){
		printf ("Voce precisa ganhar: %fkg", pesoideal-peso);
	}
	if (peso==pesoideal){
		printf ("Parabens, você esta no seu peso ideal");
	}

}