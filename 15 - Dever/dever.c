#include<stdio.h>
#include<stdlib.h>
/*
As dimensões de uma matriz estão declaradas nas variáveis abaixo:
int linhas = 5;
int colunas = 10;
Aloque essa matriz de maneira dinâmica.
*/

int main()
{
	int i;
	int** mat;
	int linha = 5;
	int coluna = 10;

	*mat = malloc(sizeof(int*) * linha);
	for(i = 0; i < linha; i++)
	{
		mat[i] = malloc(sizeof(int) * (coluna + 1));

	}

	for(i = 0; i < linha; i++)
	{
		free(mat[i]);
	}

	free(mat);

	return(0);
}
