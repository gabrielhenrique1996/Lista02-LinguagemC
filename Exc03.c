#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	int v[100], n, i, cp=0, ci=0;
	float sp=0;
	
	printf("Quantidade de elementos para o vetor ");
	scanf("%d",&n);
	
	geraVetor(v,n);
	mostraVetor(v,n);
	
	for(i=0;i<n;i++){
		if(v[i]%2==0){
			cp++;
			sp+=v[i];
		} else
		      ci++;
		
	}
	printf("quantidade de valores impares no vetor:%d\n",ci);
	printf("quantidade de valores pares no vetor:%d | media dos pares: %.2f\n",cp,sp/cp);
	
	return 0;
}
