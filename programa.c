#include <stdio.h>

int main(){
    int z = 0;
    int i, j;
    int escolha;
    int l1, c1;
    scanf("%i%i", &l1, &c1);
    int a[l1][c1];
    for(i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            scanf("%i", &a[i][j]);
        }
    }
    while(z==0){
        printf("Operacoes que voce pode fazer:\n 1.imprimir matriz\n 2.Somar os quadrados de todos os elementos da primeira coluna\n 3.somar todos os elemento da terceira linha\n 4.Somar os elementos da diagonal principal\n 5.Somar todos os elementos de indice par da segunda linha\n 6.Sair\n");
        scanf("%i", &escolha);
        printf("\n");
        if (escolha == 1){
            for(i = 0; i<l1; i++){
                for(j = 0; j<c1; j++){
                    printf("%i\t", a[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        else if (escolha == 2){
            int soma = 0;
            for(i = 0; i<c1; i++){
                soma += a[0][i]*a[0][i];
            }
            printf("A soma dos quadrados da primeira coluna e: %i\n", soma);
            printf("\n");
        }
        else if (escolha == 3){
            int soma = 0;
            for(i = 0; i<l1; i++){
                soma += a[i][0];
            }
            printf("A soma de todos os elementos da terceira linha e: %i\n", soma);
            printf("\n");
        }
        else if (escolha == 4){
            int soma = 0;
            if (l1 == c1){
            for(i = 0; i<l1; i++){
                soma += a[i][i];
                }
            printf("A soma da diagonal principal e: %i", soma);
            printf("\n");
            }
            else{
                printf("Nao tem digonal");
                printf("\n");
            }
        }
        else if (escolha == 5){
            int soma = 0;
            for (i = 0; i<l1; i++){
                if(a[i][1]%2 == 0){
                    soma+= a[i][1];
                }
            }
            printf("A soma e: %i\n", soma);
        }
        else if (escolha == 6){
            z = 1;
        }

    }
}