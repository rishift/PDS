#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factors: ");

    for (int i = 1; i <= n; i++)
        if (!(n % i))
            printf("%d, ", i);
    printf("\n");

    return 0;
}