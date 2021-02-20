#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//no global variables

int prompt(void);
void modArray(int a[], int size);
void printArray(int a[], int size);

int main(void)
{
    int arrInt[5] = {0};
    //returns whats inside the brackets
    int x, y, i;

    srand(time(NULL));
    //gets computer number as random generator ro mix more efficiently
    //srand(20);
    //seed number like where it begins to randomize

    //arrInt[0] = 0;
    //arrInt[1] = 0;
    //arrInt[2] = 0;

    x = prompt();

    for (i = 0; i < x; i++)
    {

        y = rand() % 3;
        /*
        if (y == 0)
        {
            arrInt[0]++;
        }

        else if (y == 1)
        {
            arrInt[1]++;
        }
        else
        {
            arrInt[2]++;
            //if its any of these dice sides then it increases
        }
*/
        arrInt[y]++;

        //arrInt[i] = rand() % 10;
        //gives numbers from 0 - 9

        //        printf("array[%d] = %d \n", i, arrInt[i]);
    }

    printf("You had %d 1's, %d 2's, %d 3's \n", arrInt[0], arrInt[1], arrInt[2]);

    modArray(arrInt, 5);
    printArray(arrInt, 5);

    return EXIT_SUCCESS;
}

int prompt(void)
{
    int x;
    printf("How many times would you like to roll the dice?");
    scanf(" %d", &x);

    return x;
}

void modArray(int a[], int size)
{
    a[0] = 20;
}

void printArray(int a[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("array[%d] = %d \n", i, a[i]);
    }
}