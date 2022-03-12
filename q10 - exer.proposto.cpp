#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float descobre_seq(int numero){
	float resp = 0.0;
	for(int N = 1; N <= numero; N++){ // N deve come�ar em 1 para que a sequencia siga N <= ao numero que o usuario digitar, indo de 1 ate o valor 
	resp = resp + 1.0/N; // resp = 0 + 1 + 1/1 + 1/2 + 1/3 ... 1/N
	}
	return resp;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int A;
	float resultado;
	
	printf("Informe um valor para descobrir a sequencia: ");
	scanf("%d", &A);
	
	resultado = descobre_seq(A);
	
	printf("Resultado da soma da sequencia = %.2f", resultado);
	
	return 0;
}

