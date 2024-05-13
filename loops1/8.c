#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d in binary is %08b\n", n, n);

    return 0;
}