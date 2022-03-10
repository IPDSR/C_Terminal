#include <stdio.h>

#define INFINITO 200000000

void troca (int v[], int i, int j)
{
	int aux;
	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void ordenar_por_selecao(int x[], int n)
{
	int menor, pos;
	int i, k = 0;
	while (k < n)
	{
		menor = INFINITO;
		for (i = k; i < n; i++)
		{
			if (x[i] < menor)
			{
				menor = x[i];
				pos = i;
			}
		}
		troca(x, k, pos);
		k++;
	}
}

int num_acertos (int atual[], int base[], int n)
{
	int acertos = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (atual[i] == base[j])
			{
				acertos++;
				break;
			}
		}
	}
	return acertos;
}

void main (void)
{
	int num_cartela = 1, vencedoras = 0, lost = 0, quina = 0, quadra = 0, acertos = 0;
	int cartela_atual[6];
	int cartela_sorteada[6] = {6, 9, 22, 23, 48, 52};
	int cartela_lost[6] = {4, 8, 15, 16, 23, 42};
	FILE *arq, *arq_aux;
	arq = fopen("cartelas.txt", "r");
	arq_aux = fopen("auxiliar.txt", "w");
	
	while(feof(arq) == 0) 
	{
		acertos = 0;
		fprintf(arq_aux, "Ordenada: ");
		for (int i = 0; i < 6; i++)
		{
			fscanf(arq, "%d ", &cartela_atual[i]);
		}
		ordenar_por_selecao(cartela_atual, 6);
		for (int i = 0; i < 6; i++)
		{
			fprintf(arq_aux, "%d ", cartela_atual[i]);
		}
		fprintf(arq_aux, "\n");
		acertos = num_acertos(cartela_atual, cartela_sorteada, 6);
		if (acertos == 6)
		{
			printf("\nA cartela %d eh vencedora.", num_cartela);
			vencedoras++;
		}
		else if (acertos == 5)
		{
			printf("\nA cartela %d acertou a quina.", num_cartela);
			quina++;
		}
		else if (acertos == 4)
		{
			quadra++;
		}
		acertos = num_acertos(cartela_atual, cartela_lost, 6);
		if (acertos == 6)
		{
			printf("\nA cartela %d eh do LOST.", num_cartela);
			lost++;
		}
		num_cartela++;
	}
	
	printf ("\nVencedoras: %d", vencedoras);
	printf ("\nLOST: %d", lost);
	printf ("\nQuinas: %d", quina);
	printf ("\nQuadras: %d", quadra);
	
	fclose(arq);
	fclose(arq_aux);
}