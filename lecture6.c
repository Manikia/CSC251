#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, y, i;
    int array[30] = {0};
    //3 functions to pass array


    srand(time(NULL));
    //make random numbers between 10 - 21
    //55-205

    for (i = 0; i < 100; i++)
    {
        x = (rand() % 150) + 55;
        //starts at 55 and goes up 150 numbers

        printf("Random number = %d \n", x);
    }

    return EXIT_SUCCESS;
}