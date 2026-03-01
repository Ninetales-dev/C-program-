/* 
Write a program to transpose a given matrix.
*/

#include <stdio.h>

int main() 
{
    int r, c;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], T[c][r];

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Finding transpose
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Display original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("Transpose Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}