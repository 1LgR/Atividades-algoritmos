#include <stdio.h>

int main(){
    int i,j,l1,c1;
    scanf("%i%i", &l1, &c1);
    int a[l1][c1], b[l1][c1], c[l1][c1];
    for (i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            scanf("%i", &a[i][j]);
        }
    }
    for (i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            scanf("%i", &b[i][j]);
        }
    }
    for (i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            printf("%i\t", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}