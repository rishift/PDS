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

    int max1 = arr[0], max2 = arr[1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("Largest sum is %d.\n", max1 + max2);

    return 0;
}