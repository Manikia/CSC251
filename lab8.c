//Monika Angel
//CSC251
//3/9/21

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int *pointer2);
void printArray(int *pointer);

int main(void)
{
    int array[10] = {0};
    int *pointer;

    srand(time(NULL));
    //seed generator

    pointer = array;
    //pointer is set in array

    fillArray(pointer);
    printArray(pointer);

    return EXIT_SUCCESS;
}

void printArray(int *pointer)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("array[%d] = %d \n", i, *pointer);
        pointer++;
        //moving pointer to other spaces with new random variables
    }
}

void fillArray(int *pointer2)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        *pointer2 = (rand() % 32) + 20;
        //begins at 20 and going up to 51
        //filling up the pointer
        pointer2++;
    }
}