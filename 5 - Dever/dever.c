#include<stdio.h>

/*Escreva um programa que imprima a soma de todos os n�meros de 1 at� 100.
Ou seja, ele calcular� o resultado de 1+2+3+4+...+100.*/
int main()
{
	int i, soma;
	soma = 0;

	for(i = 1; i <= 100; i++)
	{
		printf("%d\n", i);
		soma = soma + i;
	}

	printf("SOMA = %d\n", soma);

	return(0);
}
