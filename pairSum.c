#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter n and k: ");
    scanf("%d%d", &n, &k);

    int arr[1000];

    printf("Enter elements: \n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int flag = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n && j != i; j++)
            if (arr[i] + arr[j] == k)
            {
                flag = 0;
                printf("Yes, %d + %d = %d.\n", arr[i], arr[j], k);
                break;
            }

    if (flag)
        printf("No such elements with sum %d\n", k);

    return 0;
}