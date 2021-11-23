#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	
	int v[100],n,i,x,controle=0;
	
	printf("Quantidade de elementos do vetor:");
	scanf("%d",&n);
	
	geraVetor(v,n);
	mostraVetor(v,n);
	
	printf("Digite um numero:");
	scanf("%d",&x);
	
	for (i=0; i<n; i++){
	  if (x==v[i]){
	   	printf ("Esta no vetor na posicao %d", i);
	   	controle = 1;
	   	break;
	  }

   }

    if(!controle)
      printf ("Não esta no vetor");

	return 0;
	
}
