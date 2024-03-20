#include <stdio.h>

int main(){
    int a[4][8];
    int i,j;
    int soma = 0;
    for (i = 0; i<4; i++){
        for(j=0; j<8; j++){
            scanf("%i", &a[i][j]);
        }
    }
    for (i = 0; i<4; i++){
        printf("A soma da linha %i e: ", i+1);
        for(j=0; j<8; j++){
            soma += a[i][j];
            if(j == 7){
                if(soma%2 == 0){
                    printf("%i, e a soma e par.\n", soma);
                    soma = 0;
                }
                else if(soma%2 != 0){
                    printf("%i, e a soma e impar.\n", soma);
                    soma = 0;
                }
            }
        }
    }
    printf("\n");
    for (i = 0; i<8; i++){
        printf("A soma da coluna %i e: ", i+1);
        for(j=0; j<4; j++){
            soma += a[j][i];
            if(j == 3){
                if(soma%2 == 0){
                    printf("%i, e a soma e par.\n", soma);
                    soma = 0;
                }
                else if(soma%2 != 0){
                    printf("%i, e a soma e impar.\n", soma);
                    soma = 0;
                }
            }
        }
    }
}