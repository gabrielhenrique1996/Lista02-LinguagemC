#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	
	int m[100][100], linhas , cols, menor,i,j;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	leiaMatriz(m,linhas,cols);
	printf("Matriz informada :\n");
	mostraMatriz(m,linhas,cols);
	
	menor = m[0][0];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]<menor)
			   menor = m[i][j];
		}
	}
	
	printf("O menor elemento : %d\n", menor);
	
	
	return 0;
	
	
	
}
