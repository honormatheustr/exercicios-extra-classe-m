#include<stdio.h>
int ano_bissexto(int ano) {
 if (ano% 400==0){
 	return 1;
 }else if (ano % 4 == 0 && ano % 100 !=0){
    return 1;
 }else {
 	  return 0;
 }
}

int main (){
	int ano;
printf("digite um ano:");
  scanf("%d", &ano);
  
  if (ano_bissexto(ano)==1){
  printf("%d e um ano bissexto.\n",ano);
}else{
   printf ("%d nao e um ano bissexto.\n",ano);
}
	return 0;
	
}