#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// QUESTÃO 7

int calculaMedia(int num){
	int media, soma = 0, qtd = 0;
	while(num !=0){
		soma = soma + num;
		qtd++;
		printf("Informe mais um valor.Para finalizar, digite 0: \n");
		scanf("%d", &num);
	}
	
	media = soma / qtd;
	
	return media;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int v, resp;
	
	printf("CALCULO DE MEDIA ARITMETICA\n\n");
	printf("ENTRE COM SEUS DADOS\n");
	printf("______________________________________________________\n");
	printf("Digite um valor para o calculo da media aritmetica: ");
	scanf("%d", &v);
	
	resp = calculaMedia(v);
	
	printf("Media = %d", resp);
	printf("\n______________________________________________________\n");
	
}
