#include<stdio.h>
#include<stdio.h>
/*Escreva uma fun��o potencia() que receba dois inteiros, a e b, calcule a pot�ncia
 a^b, ou seja, a elevado a b e imprima o resultado.
 S� que Agora
 Escreva a mesma fun��o de potencia que voc� fez na aula anterior, s� que dessa vez, 
 o resultado deve ser salvo em um inteiro que vem na lista de par�metros da fun��o. 
 Para isso, claro, voc� precisar� receber um ponteiro de inteiro:
*/

void potencia(int *num, int a, int b);

int main(){
	int numero;
	potencia(&numero, 2, 8);
	return(0);
}

void potencia(int *num, int a, int b){
	int i;
	*num = 1;
	for(i = 0; i < b; i++){
		*num *= a;
	}
	
	printf("%d elevado a %d e igual a %d\n",a,b,*num);
}