#include <stdio.h>

int main()
{
    int n, number;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number #%d: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }

    printf("Sum = %d\n", sum);

    return 0;
}