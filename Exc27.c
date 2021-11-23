#include <stdio.h>
#include "bibliotecaMatriz.h"

int main() {
    int linhas, cols, A[100][100], B[100][100], C[100][100],i,j;

    printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&linhas,&cols);
    geraMatriz(A,linhas,cols);
    geraMatriz(B,linhas,cols);
    printf("Matriz A \n");
    mostraMatriz(A,linhas,cols);
    printf("\n\n");
    printf("Matriz B \n ");
    mostraMatriz(B,linhas,cols);
    
    
    for(i=0;i<linhas;i++){
    	for(j=0;j<cols;j++){
    		C[i][j] = A[i][j] + B[i][j];
		}
	}
    
    printf("\nSoma das Matrizez \n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < cols; j++)
            printf("%3d | ", C[i][j]);
        printf("\n");
    }
    
    return 0;
    
}
