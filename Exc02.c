#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	int i , maior=0,menor=0, v[100],n;
	
	printf("quantidade de elementos para o vetor\n");
	scanf("%d",&n);
	
	geraVetor(v,n);
	mostraVetor(v,n);
	
	for(i=0;i<n;i++){
	
	  if(i==0){maior=v[i];menor=v[i];}
      if(v[i]>maior){
        maior= v[i];
      }
      else{
        if(v[i]<menor){
            menor= v[i];
        }
      }
   }
	printf("Maior valor : %d\n",maior);
	printf("Menor valor : %d\n",menor);
	
	return 0;
	
	
	
}
