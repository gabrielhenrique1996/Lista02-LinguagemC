#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	
	int m[100][100], linhas , cols,i,j,x,cont;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	printf("Digite um numero:");
	scanf("%d",&x);
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]==x)
			   cont++;
		}
	}
	
	printf("O numero digitado aparece %d vez(ez) na matriz",cont);
	
	return 0;
}
