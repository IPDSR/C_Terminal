#include <stdio.h>
#include "pratica4.h"

 void main (void) {
	 int x, y;
	 printf ("Insira dois numeros inteiros: ");
	 scanf ("%i %i", &x, &y);
	 printf ("O mdc eh: %i", mdc(x, y));
 }