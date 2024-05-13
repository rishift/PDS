#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a, b: ");
    scanf("%d%d", &a, &b);

    int q, r;

    while (1)
    {
        q = b / a;
        r = b % a;
        if (r)
            printf("%d, ", q + 1);
        else
        {
            printf("%d.\n", q);
            break;
        }
        a = a * (q + 1) - b;
        b *= (q + 1);
    }

    return 0;
}