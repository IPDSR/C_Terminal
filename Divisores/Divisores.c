#include <stdio.h>
#include "pratica4.h"

 void main (void) {
	 int N;
	 printf ("Insira um numero inteiro: ");
	 scanf ("%i", &N);
	 printf ("O numero de divisores eh: %i", numeroDivisores(N));
 }