#include <math.h>
#include <stdio.h>
#define pi 3.141592

float paraMetrosPorSegundo (float v){
	return v/3.6;
}
	
float areaCirculo (float raio){
	return pi*(raio*raio);
}

int maior3 (int n1, int n2, int n3){
	if (n1>=n2) {
		if (n1>=n3) {
			return n1;
		}
	}
	if (n2>n1) {
		if (n2>=n3) {
			return n2;
		}
	}
	return n3;
}

int ehpar (int n){
	return ~(n&1) + 2; //o ~ faz complemento de um, ou seja, inverte os bits, so que em complemento de um o numero fica negativo, por isso é interessanre somar 2
	/*a lista é de operadores condicionais, então uma maneira de fazer isso utilizado if é:
		if (n%2==0){
			return 1;
		}
		else {
			return 0;
		}*/
}

int ehDivisivelPor3ou5(int n){
	if (n%3==0){
		if (n%5==0) {
			return 0;
		}
		else {
			return 1;
		}
	}
	if (n%5==0){
		return 1;
	}
	else {
		return 0;
	}
}

float pesoIdeal(float h, char sexo){
	if (sexo == 'F'){
		return (62.1*h) - 44.7;
	}
	if (sexo == 'M'){
		return (72.7*h) - 58;
	}
}

int somaImpares(int N){
	int soma = 0;
	if (N%2==0){
		N--;
	}
	while (N>-1){
		soma = soma + N;		
		N=N-2;
	}
	return soma;
}
		
double fatorial(int N){			//nao ta aceitando a atribuicao do 1 ao double fat eu nao sei por que desisto
	double fat=1;
		printf ("\n%lf", fat);	
	while (N>1){
		fat = fat*N;		
		N--;
		printf ("\n%i", N);	
		printf ("\n%lf", fat);			
	}
	return fat;
}

int somaNumerosDiv3ou5(int N){
	int soma = 0;
	while (N!=0){
		if (ehDivisivelPor3ou5(N)==1){
			soma = soma + N;
		}
		N--;
	}
	return soma;
}

float calculaMedia(int x, int y, int z, int operacao){
	if (operacao == 1) {
		return pow (x*y*z, 1.0/3.0);
	}
	if (operacao == 2) {
		return (x + (2*y) + (3*z))/6.0;
	}
	if (operacao == 3) {
		return 3.0/(1.0/x + 1.0/y + 1.0/z);
	}
	if (operacao == 4) {
		return (x + y + z)/3.0;
	}
}

int numeroDivisores(int N){
	int div=0;
	int aux=1;
	while (aux<=N){
		if ((N%aux)==0){
			div++;
		}
		aux++;
	}
	return div;
}

int enesimoFibonacci(int N){
	int penultimo=0;
	int ultimo=1;
	int aux=0;
	N = N-2;
	while (N!=0) {
		aux = ultimo;
		ultimo = penultimo + ultimo;
		penultimo = aux;
		N--;
	}
	return ultimo;
}

int mdc(unsigned int x, unsigned int y){
	int div=1;
	int maior=1;
	while (div<=x){
		if ((x%div==0) && (y%div==0)){
			maior=div;
		}
		div++;
	}
	return maior;
}

int mmc(unsigned int x, unsigned int y){
	int mult;
	if (x>y){
		mult = x;
		while (1) {
			if ((mult%x==0) && (mult%y==0)){
				return mult;
			}
			mult++;
		}
	}
	else {
		mult = y;
		while (1) {
			if ((mult%x==0) && (mult%y==0)){
				return mult;
			}
			mult++;
		}
	}
}
