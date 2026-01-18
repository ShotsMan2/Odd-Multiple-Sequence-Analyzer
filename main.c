#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5], i, index = 0, j;

    for (i = 11;; i++)
    {
        if (i % 2 == 1)
        {
            if (i % 3 == 0)
            {
                array[index] = i;

                index++;
            }
        }
        if (index == 5)
        {
            break;
        }
    }
    for (j = 4; j >= 0; j--)
    {
        printf("%d ", array[j]);
    }

    return 0;
}
