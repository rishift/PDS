#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 1; i < n; i++)
        arr[i + 1] = arr[i] + arr[i - 1];

    printf("Fibonacci sequence: \n");

    for (int i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}