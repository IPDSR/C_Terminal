#include <stdio.h>
#include "pratica4.h"

void main (void) {
	int n1=0, n2=0, n3=0;
	printf("Digite os 3 valores que serao comparados entre si: ");
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	printf ("%i %i %i", n1, n2, n3);
	printf("O maior numero eh: %i", maior3(n1, n2, n3));
}