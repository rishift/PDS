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

    int flag = 1;

    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
        {
            flag = 0;
            break;
        }
    
    printf(flag ? "Already sorted\n" : "Not sorted\n");

    return 0;
}