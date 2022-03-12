#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// QUESTÃO 4 

float calculo_volume(float raio){
	float volume = 4.0 / 3.0 * pow(raio,3);  // volume de uma esfera é V = 4/3 * r³
	return volume;
}

int main() {
	float Raio,resultado;
	
	printf("Para o calculo do volume, informe o raio da circunferencia: ");
	scanf("%f", &Raio);
	
	resultado = calculo_volume(Raio);
	printf("Volume = %.2f", resultado);
	
}

