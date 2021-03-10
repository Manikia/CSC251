//Monika Angel
//CSC251
//3/11/21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int *pointer2);
int main(void)
{
    int x, y, z, i;

    int arrOne[5] = {0, 1, 2, 3, 4};
    int *pointer;

    srand(time(NULL));

    pointer = arrOne;

    fillArray(pointer);

    for (i = 0; i < 5; i++)
    {
        printf("arrOne[%d] = %d\n", i, *pointer);
        pointer++;
    }

    return EXIT_SUCCESS;
}

void fillArray(int *pointer2)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        *pointer2 = rand() % 20;
        pointer2++;
    }
}