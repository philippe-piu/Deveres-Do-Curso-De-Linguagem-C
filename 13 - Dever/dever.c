#include<stdio.h>
#include<stdlib.h>
/*Escreva um código que abre o arquivo "teste.txt" em modo somente leitura. 
Trate também a possibilidade de erro na abertura.
*/
int main()
{

	FILE* f;
	f = fopen("palavrasecreta.txt", "r");
	if(f == 0)
	{
		printf("erro abrindo arquivo");
		exit(1);
	}

	
}
