#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAMANHO_1 20
#define TAMANHO_2 10
/*
Imprima a matriz de inteiros abaixo:
*/

//Chamando Funções
void preenchemat(int numeros[TAMANHO_1][TAMANHO_2]);
void imrimemat(int numeros[TAMANHO_1][TAMANHO_2]);

int main()
{
	int numeros[TAMANHO_1][TAMANHO_2];

	preenchemat(numeros);
	imrimemat(numeros);
	return(0);
}

//FUnção de preenchimento da matriz
void preenchemat(int numeros[TAMANHO_1][TAMANHO_2])
{
	int i, j;
	//Gerar numeros aleatorios
	srand(time(NULL));

	for(i = 0; i < TAMANHO_1; i++)
	{
		for(j = 0; j < TAMANHO_2; j++)
		{
			numeros[i][j] = rand() % 10;
		}
	}

}


//Função de imprimir a matriz
void imrimemat(int numeros[TAMANHO_1][TAMANHO_2])
{
	int i, j;
	for(i = 0; i < TAMANHO_1; i++)
	{
		for(j = 0; j < TAMANHO_2; j++)
		{
			printf("[%d] ", numeros[i][j]);
		}
		printf("\n");
	}
}
