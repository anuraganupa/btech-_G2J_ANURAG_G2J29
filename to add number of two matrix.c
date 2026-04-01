#include <stdio.h>

int main() {
    int m, n, i, j;
    int A[10][10], B[10][10], Sum[10][10]; 
    printf("Enter the number of rows and columns (max 10x10): ");
    scanf("%d %d", &m, &n);
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &B[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            Sum[i][j] = A[i][j] + B[i][j];
    printf("\nSum of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", Sum[i][j]);
        printf("\n");
    }
    return 0;
}
