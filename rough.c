#include <stdio.h>

int main()
{
    int s, n;
    printf("Size of set (n) ");
    scanf("%d", &s);

    int last = 0;
    int c1 = 0, c2 = 0;
    int max1 = -9999, max2 = -9999, max3 = -9999;

    int l1, l2, l3;

    printf("Input: ");

    for (int i = 0; i < s; i++)
    {
        scanf("%d", &n);
        if (last != n)
        {
            c1 += 1;
            c2 += 1;
        }
        else
        {
            c1 = 1;
            c2 = 0;
        }

        if (c1 > max1)
        {
            max1 = c1;
            l1 = n;
        }
        if ((c2 > max2) &&  (max2 < max1)) {
            max2 = c2;
            l2 = n;
        }

        last = n;
    }

    printf("Length of seq 1 = %d : %d\n", max1, l1);
    printf("Length of seq 2 = %d : %d\n", max2, l2);

    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements in the set: ");
//     scanf("%d", &n);

//     int current, prev, sequenceLength = 0;
//     int max1 = 0, max2 = 0, max3 = 0;
//     int last1 = 0, last2 = 0, last3 = 0;

//     printf("Enter the elements of the set one by one:\n");
//     for (int i = 0; i < n; i++) {
//         int num;
//         scanf("%d", &num);

//         if (i == 0 || num != prev) {
//             // Current element is different from the previous one, it's part of the current sequence
//             current = num;
//             sequenceLength++;
//         } else {
//             // Current element is the same as the previous one, start a new sequence
//             current = num;
//             sequenceLength = 1;
//         }

//         // Update the top 3 sequences and their last elements
//         if (sequenceLength >= max1) {
//             max3 = max2;
//             last3 = last2;
//             max2 = max1;
//             last2 = last1;
//             max1 = sequenceLength;
//             last1 = current;
//         } else if (sequenceLength >= max2) {
//             max3 = max2;
//             last3 = last2;
//             max2 = sequenceLength;
//             last2 = current;
//         } else if (sequenceLength >= max3) {
//             max3 = sequenceLength;
//             last3 = current;
//         }

//         prev = num;
//     }

//     printf("Top 3 Max Length Sequences based on first occurrence:\n");
//     printf("1. Length: %d, Last Element: %d\n", max1, last1);
//     printf("2. Length: %d, Last Element: %d\n", max2, last2);
//     printf("3. Length: %d, Last Element: %d\n", max3, last3);

//     return 0;
// }
