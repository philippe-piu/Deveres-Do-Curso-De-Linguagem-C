#include<stdio.h>
/*Escreva uma função soma que recebe um ponteiro de inteiro num e mais dois inteiros a e b.
A função deve calcular a soma de a+b em num.*/
//Função
void soma(int a, int b);
void soma2(int *num, int a, int b);

int main()
{
	soma(2, 3);
	printf("\n");
	int numero;
	soma2(&numero, 2, 2);
	return(0);
}

//Função Soma
void soma(int a, int b)
{
	int *num;

	*num = a + b;

	printf("Soma %d + %d = %d", a, b, *num);
}

//Função Soma opção 2
void soma2(int *num, int a, int b)
{
	*num = a + b;
	printf("Soma %d + %d = %d", a, b, *num);
}
