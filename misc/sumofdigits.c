// Input a float and print the sum of its digits

#include <stdio.h>

int main()
{
    float n;
    int sum = 0;

    printf("Enter a float: ");
    scanf("%f", &n);

    while (n != (int)n)
        n *= 10;

    int m = (int)n;

    while (m)
    {
        sum += m % 10;
        m /= 10;
    }

    printf("Sum = %d\n", sum);

    return 0;
}