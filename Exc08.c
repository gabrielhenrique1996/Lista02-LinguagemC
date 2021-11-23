#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	
	int a[100],b[100],n,x,i;
	
	printf("quantidade de elementos do vetor:");
	scanf("%d",&n);
	
	printf("Digite o valor de X:");
	scanf("%d",&x);
	
	for(i=0;i<n;i++){
	  printf("a[%d] :",i);  
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i]*x;
		printf("%d | ",b[i]);
	}
	return 0;
}
