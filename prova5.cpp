#include <stdio.h>  
#include <stdlib.h>

int main(){
	
	int i;
	
	char vet[9] = {'E','S','T','U','D','A','N','T','E'};
	
				
		
	printf("Crescente \n");	
 	for(i = 0; i <= 9;  i++ ) {
 		
 		printf("%c\n", vet[i]);
 	}
	
	
	
	
	printf("Decrescente\n");
	for(i = 9; i >= 0;  i-- ) {
		
	printf("%c\n", vet[i]);
	
	}
	
	
	
	
	//scanf("%s", & estado);
	
	//percent = ( 1 * 100) / total;
	
	//printf("valor %c  %.2f \n\n", vet1[i], vet[i]);
	 //printf("%.1f", percent);
	
   	
   
   
    //printf("O valor equivale a %.f porcentos \n\n" , percent);
   

	//printf("Valor total: %.2f\n ", total);
	   return 0;

}