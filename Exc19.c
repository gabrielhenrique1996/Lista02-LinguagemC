#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	
	int m[100][100], linhas , cols, maior,i,j;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	leiaMatriz(m,linhas,cols);
	printf("Matriz informada :\n");
	mostraMatriz(m,linhas,cols);
	
	maior = m[0][0];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			  if(m[i][j]>maior)
			    maior = m[i][j];
		}
	}
	
	printf("O maior elemento : %d\n", maior);
	
	
	return 0;
	
	
	
}
