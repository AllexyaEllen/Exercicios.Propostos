#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// QUEST?O 9 

int somaDivs(int n){
	int divisores;
	for(int d = 1; d <= n; d++){
		if(n % d == 0){
			divisores = divisores + d;
		}
	}
	return divisores;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, resp;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	resp = somaDivs(num);
	
	printf("Soma dos divisores = %d", resp);
	
}
