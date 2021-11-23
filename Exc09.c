#include <stdio.h>
#include "bibliotecaVetor.h"
#include <string.h>

int main(){
	
	char nome[100];
	int i,n;
	
	printf("Digite seu nome:");
	gets(nome);
	n = strlen(nome);
	
	for(i=n;i>=0;i--)
		printf("o seu nome invertido e: %c \n",nome[i]);
	
	
	return 0;
}
