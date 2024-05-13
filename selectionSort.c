#include <stdio.h>
#define SIZE 1000

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[SIZE];

    printf("Enter elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int t, mi;

    for (int i = 0; i < n; i++)
    {
        t = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < t)
            {
                t = arr[j];
                mi = j;
            }
        }
        t = arr[mi];
        arr[mi] = arr[i];
        arr[i] = t;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}