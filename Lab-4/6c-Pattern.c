// c. Pattern.

// 5   10  15  20
// 10  15  20  25
// 15  20  25  30
// 20  25  30  35

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 5; j++)
        {
            
            printf("%d\t", i * 5 + j * 5);

        }


        printf("\n");
    }

    return 0;
}