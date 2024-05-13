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

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n && j != i; j++) 
            if (arr[i] == arr[j]) {
                flag = 0;
                break;
            }
        
    printf(flag ? "Distinct\n" : "Not distinct\n");

    return 0;

}