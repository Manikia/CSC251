//Monika Angel
//CSC251
#include <stdio.h>
#include <stdlib.h>

void chPrint(void);

int prompt(void); //a function prototype
void printer(int h);

char c;
//global variable

int main(void)
{
    int x, y, z, i;

    printf("Enter a char: \n");
    scanf(" %c", &c);

    //printf("Enter Number: ");
    //scanf(" %d", &x);

    x = prompt();
    y = prompt();
    z = prompt();

    //printf("Number was %d \n", x);
    printer(x);
    printer(y);
    printer(z);

    chPrint();

    return EXIT_SUCCESS;
}

int prompt(void)
{
    int g;

    printf("Enter a number: ");
    scanf(" %d", &g);

    return g;
}

void printer(int h)
{
    printf("Your number was %d \n", h);
}

void chPrint(void)
{
    printf("Char is %c \n", c);
}

/*
//Monika Angel
//CSC251
//2/8/21
//Lab 4
//Modify Lab #3 by creating separate functions for each task.

//Prompt user to enter grades. You may use global variables only for grade counters but you must pass,
//to the main function, the total number of grades entered (total grades entered cannot be global variable.)
//Calculate GPA. You must pass the average back to the main.
//Print output. You must pass, to this function, the average.

//Your main function should only have function calls and variables. Do not call a function from another function.
//Submit your source code.

#include <stdio.h>
#include <stdlib.h>

void printout(int total);
int prompt(void);
double calculation(int averageSum);
//change above

int A = 0, B = 0, C = 0, D = 0, F = 0, true = 1, counter = 0;

int main(void)
{
    int averageSum = prompt();
    //shows prompt

    int GPA = calculation(averageSum);
    printout(GPA);
    //since we dont have to grab anything we dont initialize

    return EXIT_SUCCESS;
}

int prompt(void)
{
    //we arent getting anything, we are outputting so we do void
    char entry;

    int average = 0;

    
    while (true)
    {
        printf("Enter a letter Grade (press q to quit): ");
        scanf(" %c", &entry);

        switch (entry)
        {
        case 'A':
        case 'a':
        {
            average = average + 4;
            A++;
            break;
        }
        case 'B':
        case 'b':
        {
            average = average + 3;
            B++;
            break;
        }
        case 'C':
        case 'c':
        {
            average = average + 2;
            C++;
            break;
        }
        case 'D':
        case 'd':
        {
            average = average + 1;
            D++;
            break;
        }
        case 'F':
        case 'f':
        {
            average = average + 0;
            F++;
            break;
        }
        case 'q':
        {
            puts("You have exited");
            true = 0;
            break;
        }
        default:
        {
            puts("Invalid Entry");
            break;
        }
        break;
        }

        counter = A + B + C + D + F;
    }

    return average;
}

void printout(int GPA)
{
    //we are getting the global GPA
    printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's \n", A, B, C, D, F);

    printf("Class average: %.1lf\n", (double)GPA);
}

double calculation(int averageSum)
{
    double total = (double)averageSum / (double)counter;
    return total;
}
*/