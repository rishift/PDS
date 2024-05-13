#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k < n - i; k++)
            printf("  ");

        char j;

        for (j = 'A'; j < 'A' + i; j++)
            printf("%c ", j);

        for (; j > 'A' - 1; j--)
            printf("%c ", j);

        printf("\n");
    }

    return 0;
}