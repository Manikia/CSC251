//Monika Angel
//CSC251
//2/24/21
//Question 13

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int coinFlip[1] = {0};
    int flip = 10000;
    int sides = 0, heads = 0, tails = 0;
    int i;
    srand(time(NULL));

    //     Write a program to flip a coin 10, 000 times and display the
    //     number of heads and tails resulting from the flips.The results
    //    must be psuedo random every run of the program.

    for (i = 0; i < flip; i++)
    {
        sides = rand() % 2;

        if (sides == 1)
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }

    printf("heads = %d\ntails = %d\n", heads, tails);

    return EXIT_SUCCESS;
}