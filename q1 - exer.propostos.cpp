#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 1 (05/03)

int somar(int valor){
	int somar = 0;
	for(int A = valor; A >= 1; A--){
	somar = somar + A; //somar = 0 + A (valor escolhido + seus antecessores que vão definir o intervalo) 
	}
	return somar;
}
int main() {
	int a, resultado;
	
	printf("Entre com um valor: ");
	scanf("%d", &a);
	
	resultado = somar(a);
	printf("A soma dos numeros eh: %d", resultado);
	


}


