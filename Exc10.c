#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	int v[100],i,cont,n,x;
	
	printf("quantidade de elementos do vetor:");
	scanf("%d",&n);
	
	geraVetor(v,n);
	mostraVetor(v,n);
	
	printf("Digite o valor de X:");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
		
		if(v[i]==x)
		   cont++;
	    
	}
	
	printf("O numero %d repetiu %d vez(ez) no vetor",x,cont);
	
	return 0;
}
