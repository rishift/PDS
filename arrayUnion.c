#include <stdio.h>
#define SIZE 100

int main() {
    int A[SIZE], B[SIZE], C[200];

    int m, n;

    printf("Enter the number of elements in A: ");
    scanf("%d", &m);

    printf("Enter elements: ");
    for (int i = 0; i < m; i++) scanf("%d", &A[i]);

    printf("Enter the number of elements in B: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);



    // int max = m ? m > n : n;
    // int diff = max - m || max - n;

    int ci = 0;

    for (int i = 0; i < m; i++) {
        C[ci++] = A[i];
        if (i < n) {
            C[ci++] = B[i];
        }
    }









    int f, ci = 0;
    for (int i = 0; i < n; i++) {
        f = 0;
        for (int j = 0; j < m; j++) {
            if (B[i] == A[j]) {
                f = 1;
                break;
            }
        }
        if (!f) {
            A[++m] = B[i]; 
        }

    }

    for (int i = 0; i < m; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}