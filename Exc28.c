#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

int lin, col, mat[100][100], soma=0,tam;


    printf("digite o numero de linhas e colunas :");
    scanf("%d%d",&tam,&tam);
    
    for(lin=0; lin<tam; lin++){
        for(col=0; col<tam; col++){
        printf("Digite o elemento [%i][%i]:", lin, col);
        scanf("%i", &mat[lin][col]);
        }
    }

printf("Matriz\n");

    for(lin=0;lin<tam;lin++){
        for(col=0;col<tam;col++)
        
        printf("%3i |", mat[lin][col]);
        printf("\n\n");
    }
    
    for(lin=0;lin<tam;lin++){
        for(col=0;col<tam;col++)
    if(lin==col)
    soma += mat[lin][col];
    }
    
printf("\n\n O Somatorio da Diagonal Principal e :%d \n\n", soma);

return 0;
}
