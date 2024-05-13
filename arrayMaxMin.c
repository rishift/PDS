#include <stdio.h>
#define SIZE 1000

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[SIZE];

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int temp;

    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    int min = arr[0],
        max = arr[1];

    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i + 1] > max)
            max = arr[i + 1];
    }

    printf("Max = %d\nMin = %d\n", max, min);

    return 0;
}