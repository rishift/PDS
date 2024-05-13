#include <stdio.h>

int main() {
    int max = 0, min = 99999999, n = 0;
    do {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n > max) max = n;
        if (n && (n < min)) min = n;
    } while (n);

    printf("max = %d\nmin = %d\n", max, min);

    return 0;
}