//Monika Angel
//CSC251
//2/22/21

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
    int firstArray[5] = {0, 2, 4, 6, 8};
    //even numbers
    int secondArray[5] = {1, 3, 5, 7, 9};
    //odd numbers
    int i, x, y;

    printf("\nBefore Swap\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("firstArray[%d] = %d, secondArray[%d] = %d \n", i, firstArray[i], i, secondArray[i]);
    }

    printf("\nAfter Swap\n");
    for (i = 0; i < SIZE; i++)
    {
        x = firstArray[i];
        //initializing x as firstArray
        firstArray[i] = secondArray[i];
        //firstArray is now secondArray
        secondArray[i] = x;
        //secondArray is now firstArray

        printf("firstArray[%d] = %d, secondArray[%d] = %d \n", i, firstArray[i], i, secondArray[i]);
    }

    return EXIT_SUCCESS;
}