#include<stdio.h>
/*Escreva uma fun��o potencia() que receba dois inteiros, a e b, calcule a pot�ncia
 a^b, ou seja, a elevado a b e imprima o resultado.
*/

//Fun��o
void potencia(int a, int b);

int main()
{
	//2 vai ser elevado a 8
	potencia(2,8);

	return(0);
}

void potencia(int a, int b)
{
	int resultado, i;
	resultado = 1;

	for(i = 0; i < b; i++)
	{
		resultado = resultado * a;
	}
	printf("O resultado %d\n", resultado);
}
