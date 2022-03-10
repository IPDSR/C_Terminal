#include <stdio.h>
#include <stdlib.h>

void main ()
{
	int CPF;
	printf("Digite seu CPF sem os dois ultimos digitos: ");
	scanf ("%d", &CPF);
	//printf("%i\n", CPF);
	//system ("PAUSE");
	
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, d1, d2;
	
	x1 = CPF%10;
	x2 = (CPF/10)%10;
	x3 = (CPF/100)%10;
	x4 = (CPF/1000)%10;
	x5 = (CPF/10000)%10;
	x6 = (CPF/100000)%10;
	x7 = (CPF/1000000)%10;
	x8 = (CPF/10000000)%10;
	x9 = (CPF/100000000)%10;
	
	int soma = (x1*2)+(x2*3)+(x3*4)+(x4*5)+(x5*6)+(x6*7)+(x7*8)+(x8*9)+(x9*10);
	//printf ("%i", soma);
	
	int resto = soma%11;
	
	if (resto==0)
	{
		d2 = 0;
	}
	else
	{
		d2 = 11 - resto;
	}
	
	soma = (d2*2)+(x1*3)+(x2*4)+(x3*5)+(x4*6)+(x5*7)+(x6*8)+(x7*9)+(x8*10)+(x9*11);
	//printf ("\n%i", soma);
	
	resto = soma%11;	
	
	if (resto<=1)
	 {
		 d1 = 0;
	 }
	 else
	 {
		 d1 = 11 - resto;
	 }
	 
	 printf ("Seu CPF eh: %09d-", CPF);
	 printf ("%i", d2);
     printf ("%i", d1);
}