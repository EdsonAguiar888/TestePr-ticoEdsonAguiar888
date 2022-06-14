

#include <stdio.h>  
#include <stdlib.h>

int main(){

	int i;
	float sp = 67836.43;
	float rj = 36678.66;
	float mg= 29229.88;
	float es = 27165.48;
	float outros = 19849.53;	
	float vet[5] = {sp, rj, mg, es, outros};
	float total;	
	float percent; 
	
	
	for(i = 0; i <= 4;  i++ ) {
		
	total = sp + rj + mg + es + outros;
	
	percent = ( vet[i] * 100) / total;
	
	printf("Valor R$%.2f \n", vet[i]);     
    printf("Equivale a %.f porcento do total. \n\n" , percent);   
}

	printf("Valor total: R$%.2f\n ", total);
	   return 0;

}