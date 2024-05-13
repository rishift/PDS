#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[1000];

    printf("Enter elements: \n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Element with max value is %d.\n", max);

    return 0;
}