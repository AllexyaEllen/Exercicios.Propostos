#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// QUEST�O 2 

int segundos(int h, int m, int s){
	int resultado;
	resultado = s + (h * 3600) + (m * 60);
	return resultado;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int Hr, Mn, S, resultado;
	
	printf("\nENTRE COM AS HORAS: ");
	scanf("%d", &Hr);
	
	printf("\nENTRE COM OS MINUTOS: ");
	scanf("%d", &Mn);
	
	printf("\nENTRE COM OS SEGUNDOS: ");
	scanf("%d", &S);

	resultado = segundos(Hr, Mn, S);
	
	printf("O total de segundos �: %d", resultado);
	
	
	
}

