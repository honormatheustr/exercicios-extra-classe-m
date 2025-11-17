#include <stdio.h>

float somar (float a , float b){

return a + b;
	
}


float subtrair (float a , float b){
	
	return a - b;
		
}


float multiplicar (float a , float b){
	
return a * b;
	
}

float divisao (float a , float b){
	
return a / b;	
	
}

int main(){
	
	
	

	
	float n1, n2, resultado;
	int operacao;
	
	
	printf("Digite o numero:");
	scanf("%f", &n1);
	
	
	printf("Digite o numero:");
    scanf("%f", &n2);
    
    
    printf("Escolha a operacao:");
    printf("1 - adicao.");
    printf("2 - subtracao.");
    printf("3 - mutiplicacao.");
    printf("4 - divisao.");
    printf("operacao:");
    scanf("%d", &operacao);
    
    
    if (operacao == 1){
    	
    	resultado = somar (n1, n2);
    	printf("Resultado: %f.", resultado);
	}
	
	
	else if(operacao == 2){
    	
    	resultado = subtrair (n1, n2);
    	printf("Resultado: %f.", resultado);
	}
	
	
		else if(operacao == 3){
    	
    	resultado = multiplicar (n1, n2);
    	printf("Resultado: %f.", resultado);
	}
	
	
		else if(operacao == 4){
    	
    	if(n2 == 0){
    		
    		printf("Erro: Nao pode dividir por zero.");
    		
		} else{
			
			resultado = divisao (n1, n2);
			printf("resultado %f", resultado);
			
		}
		
	}
	
	else{
		
		printf("Operacao Invalida:");
	}
	
return 0;
}

