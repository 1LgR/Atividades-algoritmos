#include <stdio.h>
#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void lerMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas, int qtd_colunas);

void mostraMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas, int qtd_colunas);

void multiplicaMatrizes(int m1[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas1,
    int qtd_colunas1, int m2[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas2,
    int qtd_colunas2, int m3[MAX_LINHAS][MAX_COLUNAS]);

void lerMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas, int qtd_colunas) {
    int i, j;
    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            scanf("%d", &m[i][j]);
            }
        }
    }
void mostraMatriz(int m[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas,
        int qtd_colunas) {
    int i, j;
    printf("\n");
    for (i = 0; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            printf("%5d ", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

void multiplicaMatrizes(int m1[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas1,
        int qtd_colunas1, int m2[MAX_LINHAS][MAX_COLUNAS], int qtd_linhas2,
        int qtd_colunas2, int m3[MAX_LINHAS][MAX_COLUNAS]) {
    int i, j, k;
    if (qtd_colunas1 != qtd_linhas2) {
        printf("[ERRO] matrizes nao compativeis para multiplicacao\n");
        return;
    }
    for (i = 0; i < qtd_linhas1; i++) {
        for (j = 0; j < qtd_colunas2; j++) {
            m3[i][j] = 0;
            for (k = 0; k < qtd_colunas1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main(int argc, char **argv) {
    int qtd_linhasa, qtd_linhasb, qtd_linhasc;
    int qtd_colunasa, qtd_colunasb, qtd_colunasc;
    int a[MAX_LINHAS][MAX_COLUNAS];
    int b[MAX_LINHAS][MAX_COLUNAS];
    int c[MAX_LINHAS][MAX_COLUNAS];

    scanf("%d", &qtd_linhasa);
    scanf("%d", &qtd_colunasa);
    lerMatriz(a, qtd_linhasa, qtd_colunasa);
    scanf("%d", &qtd_linhasb);
    scanf("%d", &qtd_colunasb);
    lerMatriz(b, qtd_linhasb, qtd_colunasb);
    qtd_linhasc = qtd_linhasa;
    qtd_colunasc = qtd_colunasb;

    multiplicaMatrizes(a, qtd_linhasa, qtd_colunasa,
            b, qtd_linhasb, qtd_colunasb, c);

    printf("Matriz a:\n");
    mostraMatriz(a, qtd_linhasa, qtd_colunasa);
    printf("Matriz b:\n");
    mostraMatriz(b, qtd_linhasb, qtd_colunasb);
    printf("Matriz c:\n");
    mostraMatriz(c, qtd_linhasa, qtd_colunasc);
    return 0;
}