#include<stdio.h>

int matricaLol(int *mat, int m, int n){
    int max;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(*(mat + i * n + j) > max){
                max = *(mat + i * n + j);
            }
        }
    }
    return max;
}

int main(void) {
    int m, n;

    do{
        printf("Unesi m broj: ");
        scanf("%d", &m);
    } while (m > 8 || m < 2);
    do{
        printf("Unesi n broj: ");
        scanf("%d", &n);
    } while (m > 5 || n < 2);

    int mat[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("\nUnesi m[%d][%d] broj: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int rezultat = matricaLol(&mat[0][0], m, n);

    printf("\nREZULTATI:\n%d",rezultat);
    return 0;
}
