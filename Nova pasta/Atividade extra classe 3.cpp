#include <stdio.h>

int somar_digitos (int n){
	
	int soma = 0;
	
	if(n < 0){
		n = -n;
		
	}
	
	while (n > 0){
		soma += n % 10;
		n = n /10;
		
	}
	
	return soma;
}

int main(){
	
	
	int numero;
	
	
	printf("Digite o Numero:");
	scanf("%d", &numero);
	
	
	printf("A soma dos numros  e %d.",somar_digitos(numero));
	
	
	return 0;
}