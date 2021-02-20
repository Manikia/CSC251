//Monika Angel
//CSC251
//2/9/21
//Lab 4

#include <stdio.h>
#include <stdlib.h>

void printout(double total);
int prompt(void);
double calculation(int averageSum);

int A = 0, B = 0, C = 0, D = 0, F = 0, true = 1, counter = 0;

int main(void)
{
    double averageSum = prompt();
    //shows prompt

    double GPA = calculation(averageSum);
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

void printout(double GPA)
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
