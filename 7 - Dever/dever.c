#include<stdio.h>
/*Veja o array de inteiros abaixo. Como fazer para imprimir todos os elementos dele?
int notas[5];
notas[0] = 1;
notas[1] = 4;
notas[2] = 7;
notas[3] = 5;
notas[4] = 10;
*/
int main()
{
	int i,notas[5];
	notas[0] = 1;
	notas[1] = 4;
	notas[2] = 7;
	notas[3] = 5;
	notas[4] = 10;
	
	for(i = 0; i < notas[i]; i++){
		printf("Notas[%d] = %d\n",i,notas[i]);
	}
	return(0);
}
