#include <stdio.h>
int main() {
    int m, n, o, p;

    scanf("%d %d", &m, &n);
    int A[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &o, &p);
    int B[o][p];
    for (int i=0; i<o; i++) {
        for (int j=0; j<p; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    if (n != o) {
        printf("error\n");
    } else {
        int C[m][p];
        for (int i=0; i<m; i++) {
            for (int j=0; j<p; j++) {
                int element = 0;
                for (int k=0; k<n; k++) {
                    element += A[i][k] * B[k][j]; 
                }
                C[i][j] = element;
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<p; j++) {
                printf("%d", C[i][j]);
                if (j != p-1) {
                    printf(" ");
                }
            } printf("\n");
        }
    }
}