#include<stdio.h>

/*Escreva um programa que pe�a um inteiro ao usu�rio, e com esse inteiro, ele imprima,
linha-a-linha, a tabuada daquele n�mero at� o 10. Por exemplo, se ele escolher o n�mero 2, 
 o programa imprimir�: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20
*/

int main(){
	int tabuada = 0;
	int multiplicacao = 0;
	int i;
	
	printf("Informe um numero de qual tabuada deseja ver\n");
	scanf("%d", &tabuada);
	for(i = 1; i <= 10; i++){
		multiplicacao = tabuada * i;
		printf("\n%d X %d = %d\n",tabuada,i,multiplicacao);
	}
	return(0);
}