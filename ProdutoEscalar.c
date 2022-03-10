#include <stdio.h>

#define TAM_MAX 100

void main (void) {
	double u[TAM_MAX], v[TAM_MAX];
	double produto;
	unsigned int n;
	
	do {
		printf("Digite a dimensao dos vetores (ate 100): ");
		scanf("%d", &n);
		if (n > TAM_MAX)
			printf("\nDimensao Invalida");
	}
	while (n > TAM_MAX);
	printf("Digite os valorses de u entre espacos: ");
	for (int i = 0; i<n; i++)
		scanf("%lf", &u[i]);
	printf("Digite os valores de v entre espacos: ");
	for (int i = 0; i<n ; i++)
		scanf("%lf", &v[i]);
	for (int i = 0; i<n; i++)
		produto = produto + (u[i] * v[i]);
	printf ("O produto escalar entre u e v eh: %lf", produto);
}