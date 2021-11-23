#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){


    int m[100][100], linhas , cols,i,j;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	printf("\n\n");
	
	for(i=0;i<linhas;i++){
			printf("%3d |",m[i][linhas-1-i]);
		
		printf("\n");
	}
	return 0;
	
	
}
