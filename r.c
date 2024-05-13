#include <stdio.h>

int main()
{
    int s, n;
    printf("Size of set (n) ");
    scanf("%d", &s);

    int last = 0;
    int max1 = 0, max2 = 0, max3 = 0;
    int c = 0;

    int l1, l2, l3;

    printf("Input: ");

    for (int i = 0; i < s; i++)
    {
        scanf("%d", &n);
        if (last != n)
        {
            c += 1;
        }
        else
        {
            c = 0;
        }

        // if (c >= max1)
        // {

        //     max1 = c;

        //     l1 = n;

        //     max3 = max2;
        //     max2 = max1;
        //     l3 = l2;
        //     l2 = l1;
        // }

        if (c >= max1) {
            max3 = max2;
            l3 = l2;
            max2 = max1;
            l2 = l1;
            max1 = c;
            l1 = n;
        } else if (c >= max2) {
            max3 = max2;
            l3 = l2;
            max2 = c;
            l2 = n;
        } else if (c >= max3) {
            max3 = c;
            l3 = n;
        }

        last = n;
    }
    printf("Length of seq 1 = %d : %d\n", max1, l1);
    printf("Length of seq 2 = %d : %d\n", max2, l2);
    printf("Length of seq 3 = %d : %d\n", max3, l3);

    return 0;
}