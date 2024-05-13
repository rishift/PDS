#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter an odd integer: ");
        scanf("%d", &n);
    } while (!(n % 2));

    for (int i = n; i > 0; i -= 2, n--)
    {
        int j = 0;
        for (; j < n - i; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("%d", n);
        printf("\n");
    }

    return 0;
}