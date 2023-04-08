#include<stdio.h>
#include<stdlib.h>
/*
As dimens�es de uma matriz est�o declaradas nas vari�veis abaixo:
int linhas = 5;
int colunas = 10;
Aloque essa matriz de maneira din�mica.
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
