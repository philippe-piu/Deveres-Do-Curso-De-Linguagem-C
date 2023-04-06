#include<stdio.h>
/*Escreva uma função soma que recebe um array de inteiros e o tamanho do array, 
e retorna a soma dos números desse array.
*/

//Funções
int soma(int vetsoma[3]);

int main(){
	int vet[3]= {20,10,10};
	printf("Opcao 1\n");
	printf("A Soma de %d + %d + %d = %d\n", vet[0], vet[1],vet[2],soma(vet));
	return(0);
}

//Função soma
int soma(int vetsoma[3]){
	int i, resultado = 0;
	
	for(i = 0; i < 3; i++){
		resultado = resultado + vetsoma[i];
	}
	return resultado;
}