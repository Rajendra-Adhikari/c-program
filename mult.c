#include <stdio.h>

int main() {
    int i, j, k;
    int A[10][10], B[10][10], C[10][10];
    int sum=0, r1, r2, c1, c2;

    printf("Enter size of matrix A (rows and columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter size of matrix B (rows and columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Sorry, cannot multiply: incompatible dimensions.\n");
        return 0;
    }

    printf("Enter all elements of matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter all elements of matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
                C[i][j]=sum;
            }
        }
    }

    // Display the result
    printf("Resultant matrix C (A x B) is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
