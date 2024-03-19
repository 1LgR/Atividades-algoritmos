#include <stdio.h>

int main(){
    printf("Para uma matriz ser multiplicavel a quantidade de colunas da primeira deve ser igual a quantidade de linhas da segunda");
    int l1,c1, l2, c2;
    printf("Digite quantas linhas e colunas você quer que a matriz tenha: ");
    scanf("%i%i", &l1,&c1);
    int a[l1][c1], b[l2][c2];
    int i,j;
    for (i = 0; i<l1; i++){
        for(j=0; j<c1; j++){
            scanf("%i", &a[i][j]);
        }
    }
    printf("Digite quantas linhas e colunas você quer que a matriz tenha: ");
    scanf("%i%i", &l2,&c2);
    if(c1 == l2){
        for (i = 0; i<l2; i++){
            for(j=0; j<c2; j++){
                scanf("%i", &b[i][j]);
            }
        }
        
    }
    else{
        printf("Não da para multiplicar essas matrizes");
    }
}