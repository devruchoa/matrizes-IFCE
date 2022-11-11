#include <stdio.h>

int main() {
    int i = 0, j = 0, contador = 1;
    float matriz1[i][j], matriz2[i][j], A[i][j], B[i][j], matrizgerada[i][j];

    printf("Numero de linhas: ");
    scanf("%d", &i);

    printf("Numero de colunas: ");
    scanf("%d", &j);

    for(int linha = 0; linha < i; linha++) {
        for(int coluna = 0; coluna < j; coluna++) {
            printf("Qual deve ser o elemento [%d][%d]? ", linha, coluna);
            scanf("%f", &matriz1[linha][coluna]);
        }
    }

    printf("Ok, agora vamos montar a segunda matriz!\n");

    for(int linha = 0; linha < i; linha++) {
        for(int coluna = 0; coluna < j; coluna++) {
            printf("Qual deve ser o elemento [%d][%d]? ", linha, coluna);
            scanf("%f", &matriz2[linha][coluna]);
        }
    }

    printf("Primeira matriz montada:\n");

    for(int linha = 0; linha < i; linha++) {
        for(int coluna = 0; coluna < j; coluna++) {
            printf("%.1f\t", matriz1[linha][coluna]);
        }
        printf("\n");
    }

    printf("Segunda matriz montada:\n");

    for(int linha = 0; linha < i; linha++) {
        for(int coluna = 0; coluna < j; coluna++) {
            printf("%.1f\t", matriz2[linha][coluna]);
        }
        printf("\n");
    }

    printf("Agora as 11 matrizes geradas a partir da formula (1 - t) * A + t * B, A e B matrizes e t variando de 0 a 1 na razão de 0.1:\n");

    for(float t = 0; t < 1.1; t += 0.1) {
        printf("%d matriz gerada: \n", contador);
        contador++;

        for(int linha = 0; linha < i; linha++) {
            for(int coluna = 0; coluna < j; coluna++) {
                A[linha][coluna] = matriz1[linha][coluna];
                A[linha][coluna] *= (1 - t);
            }
        }

        for(int linha = 0; linha < i; linha++) {
            for (int coluna = 0; coluna < j; coluna++) {
                B[linha][coluna] = matriz2[linha][coluna];
                B[linha][coluna] *= t;
            }
        }
    
        for(int linha = 0; linha < i; linha++) {
            for (int coluna = 0; coluna < j; coluna++) {
                matrizgerada[linha][coluna] = A[linha][coluna] + B[linha][coluna];
                printf("%.1f\t", matrizgerada[linha][coluna]);
            }
            printf("\n");
        }        
    }

    return 0;
}