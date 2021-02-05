//Monika Angel
//CSC251
//2/5/21
//Lab 3

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    //int grade = 0, counter;
    double average = 0.0, total = 0.0;
    char entry;
    int A = 0, B = 0, C = 0, D = 0, F = 0, true = 1, counter = 0;

    while(true)
    {
        printf("Enter a letter Grade (press q to quit): ");
        scanf(" %c", &entry);

        switch(entry)
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

    }
    counter = A + B + C + D + F;

    printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's \n", A, B, C, D, F);
    total = (double)average/(double)counter;

    printf("Class average: %.1lf\n", (double)total);

    return EXIT_SUCCESS;

}

