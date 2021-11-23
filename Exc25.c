#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){


    int m[100][100], linhas , cols,i,j,contpar,continpar;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]%2==0){
				contpar+=1;
			}else{
				continpar+=1;
			}
		}
	}
	
	printf("numeros pares : %d\n",contpar);
	printf("numeros impares : %d\n",continpar);
	
	return 0;
	
	
}
