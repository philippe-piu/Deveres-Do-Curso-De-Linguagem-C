#include<stdio.h>
/*Escreva uma fun��o soma que recebe um ponteiro de inteiro num e mais dois inteiros a e b.
A fun��o deve calcular a soma de a+b em num.*/
//Fun��o
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

//Fun��o Soma
void soma(int a, int b)
{
	int *num;

	*num = a + b;

	printf("Soma %d + %d = %d", a, b, *num);
}

//Fun��o Soma op��o 2
void soma2(int *num, int a, int b)
{
	*num = a + b;
	printf("Soma %d + %d = %d", a, b, *num);
}
