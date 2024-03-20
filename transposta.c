#include <stdio.h>

int main(){
    int l,c;
    printf("Digite quantas linhas e colunas voce quer que a matriz tenha: ");
    scanf("%i%i", &l,&c);
    int a[l][c];
    int i,j;
    for (i = 0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%i", &a[i][j]);
        }
    }
    for (i = 0; i<c; i++){
        for(j=0; j<l; j++){
            printf("%i\t", a[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}