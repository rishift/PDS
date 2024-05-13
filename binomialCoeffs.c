#include <stdio.h>

int c(int n, int r)
{
    if (r == 1)
        return n;

    int f = 1, d = 1;
    for (int i = 0; i < r; i++)
    {
        f *= n - i;
        d *= i + 1;
    }
    return f / d;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[1000];
    arr[0] = arr[n] = 1;

    int prev = 1, t;

    for (int i = 1; i < n / 2 + 1; i++)
    {
        t = c(n - 1, i);
        arr[i] = arr[n - i] = prev + t;
        prev = t;
    }

    for (int i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}