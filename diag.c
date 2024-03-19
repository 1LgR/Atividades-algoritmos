#include <stdio.h>

int main(){
    float a[5][5], b[5];
    int i,j;
    for (i = 0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%f", &a[i][j]);
        }
    }
    for(i = 0; i<5; i++){
        b[i] = a[i][i];
    }
    printf("Diagonal principal: ");
    for(i = 0; i<5; i++){
        printf("%.2f ", b[i]);
    }
}