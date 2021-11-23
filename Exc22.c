#include <stdio.h>
#include "bibliotecaMatriz.h"

int main(){
	
	int m[100][100], linhas , cols,i,j,rept,valorVerificado,k,l;
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	
	
for ( i=0; i<linhas; i++){
    for ( j=0; j<cols; j++){
        valorVerificado = m[i][j];
        for (k=0; k< linhas; k++){
            for (l=0; l<cols; l++){
                if (valorVerificado == m[k][l]){
                    rept++;
                }
            }
        }
    }
}

    printf("Os elementos da matriz repetem %d",rept);
	
	return 0;
}
