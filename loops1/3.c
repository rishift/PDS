#include <stdio.h>

int main()
{
    int n, sum = 0;
    int pow;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++)
    {
        pow = k;
        for (int i = 1; i < k; i++)
            pow *= k;
        sum += pow;
    }

    printf("Power sum = %d\n", sum);

    return 0;
}