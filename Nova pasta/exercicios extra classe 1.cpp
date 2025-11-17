#include<stdio.h>

#define TAM 10

float calcularmedia(int v[]){
	int soma = 0;
	
	for(int i = 0; i < TAM; i++){
	  soma+= v [i];
}	
	
	return (float) soma / TAM;
	
}

void maiorMenor(int v[], int *maior,int *menor){
	
	*maior =v[0];
	*menor =v[0];
	
	for (int i=1;i < TAM; i++){
        if (v[i] > *maior)
        *maior = v[i];

      if (v[i] < *menor)
        *menor = v[i];


	}
	
}
 int contarpares(int v[]){
    int cont = 0;
 	for(int i = 0; i< TAM; i++){
	 if (v[i] % 2==0)
 	cont++;
 	
 }

    return cont;
}

int main (){
	 int vetor[TAM];
	 int maior, menor;
	  
printf("digite 10 numeros inteiros:\n");
  
   for (int i=0; i< TAM; i++){
   	 scanf("%d", &vetor[i]);
   	
   }
	 
	 float media = calcularmedia(vetor);
	 maiorMenor(vetor, &maior, &menor);
	 int pares = contarpares(vetor);
	 
	 printf ("\nmedia: %.2f\n",media);
	 printf("maior valor: %d\n",maior);
	 printf("menor valor: %d\n",menor);
	 printf("quantidade de pares: %d\n",pares);
	 
	 
	 return 0;
}
    
    
    
    
    
    