#include <stdio.h>
#include "pratica4.h"

 void main (void) {
	 int N;
	 printf ("Insira um numero inteiro: ");
	 scanf ("%i", &N);
	 printf ("O enesimo termo da sequencia de Fibonacci eh: %i", enesimoFibonacci(N));
 }