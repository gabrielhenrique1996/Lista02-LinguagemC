#include <stdio.h>
#include "bibliotecaVetor.h"
#include <string.h>

int main(){
	
	char dna[50], comp[50];
	int i,n;
	
	printf("Entre com a sequencia de DNA:");
	gets(dna);
	n = strlen(dna);
	
	for(i=0;i<n;i++){
		switch(dna[i]){
			case 'A': comp[i]= 'T';
			break;
			case 'T': comp[i]= 'A';
			break;
			case 'C': comp[i]= 'G';
			break;
			case 'G': comp[i]= 'C';
			break;
		}
		
	}
	printf("Fita Principal :\n ");
		for(i=0;i<n;i++){
			printf("%c |", dna[i]);
		}
		printf("\nFita Complementar :\n ");
		for(i=0;i<n;i++){
			printf("%c |", comp[i]);
		}
	
	
}
