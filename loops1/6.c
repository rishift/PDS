#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter a, b: ");
    scanf("%d%d", &a, &b);

    while (b)
    {
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        b = b % a;
    }

    printf("GCD = %d\n", a);

    return 0;
}