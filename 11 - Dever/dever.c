#include<stdio.h>
#include<stdio.h>
/*Escreva uma função potencia() que receba dois inteiros, a e b, calcule a potência
 a^b, ou seja, a elevado a b e imprima o resultado.
 Só que Agora
 Escreva a mesma função de potencia que você fez na aula anterior, só que dessa vez, 
 o resultado deve ser salvo em um inteiro que vem na lista de parâmetros da função. 
 Para isso, claro, você precisará receber um ponteiro de inteiro:
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