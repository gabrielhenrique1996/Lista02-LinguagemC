#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){


    int m[100][100], linhas , cols,i,j,soma;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	for(i=0; i<linhas; i++){
		for (j=0; j<cols; j++){
			if(i==j){
				m[i][j] = 1;
			} else {
				m[i][j] = 0;
			}
		}
	}

	printf("\n\n  Matriz Diagonal\n\n");
	for(i=0;i<linhas;i++){
		for (j=0;j<cols;j++){
			soma = soma+(m[i][j]);
			printf("%3d |", m[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
}
