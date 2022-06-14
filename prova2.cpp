

#include <stdio.h>  
#include <stdlib.h>

int main(){

	int vet[11] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
	
	int soma;
	int i ;
	int n = 0;
	int num1;
	int num2;
	
	 
	    
    printf("Digite um num\n");
    scanf("%d", & num1);
    
    printf("Digite outro num \n");
    scanf("%d", & num2);
	    
	for(i = 0; i <= 10;  n++ ) {
		
			
		soma = soma + i++ ;
		
		if(num1 + num2 == vet[n]){
		printf(" \n\n O num %d pertence a sequencia  \n\n", vet[n]);
		
		}
	
		else{
		printf(" O num nao pertence a sequencia \n");
		}	   
	  	printf("num1 + num2 = %d  %d \n" ,vet[n], num1+num2);
		}
	
	   return 0;

}