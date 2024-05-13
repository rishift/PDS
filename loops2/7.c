#include <stdio.h>

int main()
{
    int max = 0, n, c = 1;
    int last = 0;

    printf("Input: ");
    do
    {
        scanf("%d", &n);
        if (last <= n)
            c += 1;
        else
            c = 1;

        if (c > max)
            max = c;

        last = n;
    } while (n);
 
    printf("max = %d\n", max);

    return 0;
}