#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	int a[100],b[100],c[100],n,i;
	
	printf("quantas posicoes vai ter o seu vetor:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	  printf("a[%d] :",i);  
	  scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
	  printf("b[%d] :",i);  
	  scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++){
   	
   	c[i]=a[i]*b[i];
   
   printf("%d |",c[i]);
   }
   
   
   return 0;
}
