#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printer(int array[]);
int randomFill(int array[]);
int sorter(int array[]);

int main(void)
{
    int x, y, i;
    int array[30] = {0};

    srand(time(NULL));

    printf("\nArray before insert:\n");
    printer(array);

    printf("\nArray after insert:\n");
    randomFill(array);
    //function creates new random array
    printer(array);
    //array gets printed out in printer function

    printf("\nArray after sort:\n");
    sorter(array);
    printer(array);

    return EXIT_SUCCESS;
}

int printer(int array[])
{
    int i;

    for (i = 0; i < 30; i++)
    {
        printf("a[%d] = %d \n", i, array[i]);
    }
}

int randomFill(int array[])
{
    //doesnt print anything out so calling print function will
    //make it print new random sort
    int i;

    for (i = 0; i < 30; i++)
    {
        array[i] = (rand() % 150) + 55;
        //starts at 55 and goes up 150 numbers
    }
}

int sorter(int array[])
{
    //doesnt print anything out so calling print function will
    //make it print new array sort
    int i, j, hold;
    for (j = 1; j < 30; ++j)
    {
        for (i = 0; i < 30 - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}