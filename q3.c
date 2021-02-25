// Monika Angel
//CSC251
//2/24/21
//Problem 3
// Create a program that uses a loop.
// The loop must run through 11 iterations. during each iteration
//the program will add 2 to a variable named x. The initial value of x will be 0.
// The program will print the final value of x when it completes the loop.
// After the loop completes, the program will print a decimal value for the
//result of x / 20. It will need to be in the format of d.ddd (3 decimal places.)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 0, i;

    for (i = 0; i < 11; i++)
    {
        x = x + 2;
    }

    printf("%d\n", x);
    double total = x / (double)20;

    printf("%.3f\n", (double)total);

    //printf("%.3lf\n", (double)x);

    return EXIT_SUCCESS;
}