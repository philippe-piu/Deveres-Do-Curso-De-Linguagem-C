#include<stdio.h>
/*Escreva um programa que peça para o usuário digitar duas variáveis inteiras 
(x e y) e imprima o resultado da multiplicação entre essas duas variáveis.*/

int main(){
	
	int a,b,resultado;
	
	a =0;
	b = 0;
	resultado = 0;
	
	printf("Faca a multiplicacao de dois numeros inteiros aqui abaixo informe esses dois numeros\n");
	printf("\nPrimeiro Valor:");
	scanf("%d",&a);
	printf("\nSegundo Valor:");
	scanf("%d",&b);
	
	resultado = a*b;
	
	printf("\nO resultado de %d x %d = %d\n",a,b,resultado);
	
	return(0);
}