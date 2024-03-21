#include <stdio.h>

int main(){
    int i, j, bombas, l, c;
    int a[5][5];
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            a[i][j] = 0;
        }
    }
    printf("Digite quantas bombas voce quer: \n");
    scanf("%i", &bombas);
    for (i = 0; i < bombas; i++){
        printf("Digite em que linha e coluna voce quer que a bomba fique\n");
        scanf("%i%i", &l, &c);
        a [l-1][c-1] = -1;
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] != -1 && i > 0 && j>0 && i<4 && j<4){
                if(a[i-1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j+1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 0 && j == 0){
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 4 && j == 0){
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 0 && j == 4){
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 4 && j == 4){
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i > 0 && j == 0 && i<4){
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j+1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 0 && j > 0 && j<4){
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j+1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i > 0 && j == 4 && i<4){
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j] == -1){
                    a[i][j]++;
                }
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i+1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j-1] == -1){
                    a[i][j]++;
                }
            }
            if(a[i][j] != -1 && i == 4 && j > 0 && j<4){
                if(a[i][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j-1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j+1] == -1){
                    a[i][j]++;
                }
                if(a[i-1][j] == -1){
                    a[i][j]++;
                }
            }
        }
    }
    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            if(a[i][j] == -1){
                printf("| %i|", a[i][j]);
            }
            else{
                printf("| %i |", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}