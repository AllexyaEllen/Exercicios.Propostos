#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// QUEST�O 5 

int valor(int numero){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	if(numero > 0){
		printf("O numero informado � positivo");
	}
	else{
		printf("O numero informado � negativo");
	}
}

int main() {
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	valor(n);
}
