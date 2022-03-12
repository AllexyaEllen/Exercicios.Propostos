#include <stdio.h>
#include <stdlib.h>

// QUESTÃO 6 

float calculo_pesoideal(float alt, char sexo){
	float peso_ideal;
	if(sexo == 'M'){
	peso_ideal = 72.7 * alt - 58;
	return peso_ideal;	
	}
	else if(sexo == 'F'){
	peso_ideal = 62.1 * alt - 44.7;
	return peso_ideal;
		
	}
	
}

int main() {
	float Alt, Peso, peso_ideal;
	char Sexo;
	
	printf("CALCULO DE PESO IDEAL - IMC\n\n");
	printf("ENTRE COM SEUS DADOS\n");
	printf("________________________________________\n");
	printf("Informe sua altura: ");
	scanf("%f", &Alt);
	
	printf("Informe seu sexo: ");
	scanf("%s", &Sexo); 
	
	printf("Informe seu peso: ");
	scanf("%f", &Peso);
	
	peso_ideal = calculo_pesoideal(Alt,Sexo);
	
	printf("Seu peso ideal = %.1f Kg\n", peso_ideal);
	printf("________________________________________\n");
	
}

