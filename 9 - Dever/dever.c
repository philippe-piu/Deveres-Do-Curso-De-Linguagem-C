#include<stdio.h>

/*Escreva uma função soma(int numeros[10]) que receba um array de inteiros e imprime a soma 
de todos os elementos dentro desse array.
*/

//Função
void soma(int numeros[10]);
int main(){
	int numeros [10] = {1,2,3,4,5,6,7,8,9,10};
	soma(numeros);
	return(0);
}

void soma(int numeros[10]){
	int resultado,i;
	resultado = 0;
	
	for(i = 0; i < 10; i++){
		resultado =  resultado + numeros[i];
	}
	
	printf("A Soma de todos os Valores do Vetor e %d\n",resultado);
}