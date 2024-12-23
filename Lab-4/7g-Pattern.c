// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= 5 - i; k++)
        {
            printf("%d ", (k + i) % 2);
        }

        printf("\n");
    }

    return 0;
}