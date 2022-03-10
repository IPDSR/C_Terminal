#include <stdio.h>
#include "pratica4.h"

 void main (void) {
	 int x, y;
	 printf ("Insira dois numeros inteiros: ");
	 scanf ("%i %i", &x, &y);
	 while ((x<=0) || (y<=0)){
	 	 printf ("Insira dois numeros inteiros: ");
		 scanf ("%i %i", &x, &y);
	 }
	 printf ("O mmc eh: %i\n", mmc(x, y));
	 printf ("O mdc eh: %i\n", mdc(x, y));	 
 }