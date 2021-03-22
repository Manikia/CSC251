//Monika Angel
//CSC251
// Create a program that does the following:
// -in a separate function prompt the user to enter the number of sides for a die no more than 20 sides.
// -In a separate function prompt a user to enter the number of times they would like to roll the die.
// -Create an array to use as counters for the die in the main function.
// -in a separate function roll the die
// -In a separate function print out the results.
// -all function calls must be made from the main function.
// -no global variables.
// //sample output
// Enter the number of sides for your die:12
// Enter the number of rolls:25
// The number of times you rolled a:
// 1=5
// 2=2
// 3=1
// 4=2
// 5=2
// 6=1
// 7=3
// 8=2
// 9=1
// 10=1
// 11=2
// 12=3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25

int numSide(void);
int numRoll(void);
int rollDie(int roll, int arrInt[], int sides);
int printOut(int arrInt[], int sides);

int main(void)
{
    srand(time(NULL));
    // -Create an array to use as counters for the die in the main function.
    // -all function calls must be made from the main function.

    int arrInt[20] = {0};

    int sides = numSide();
    int roll = numRoll();
    rollDie(roll, arrInt, sides);
    printOut(arrInt, sides);

    return EXIT_SUCCESS;
}

// -in a separate function prompt the user to enter the number of sides for a die no more than 20 sides.
int numSide(void)
{
    int sides;

    printf("Enter the number of sides for a die, no more than 20\n");
    scanf(" %d", &sides);

    return sides;
}

// -In a separate function prompt a user to enter the number of times they would like to roll the die.
int numRoll(void)
{
    int roll;

    printf("How many times would you want to roll\n");
    scanf(" %d", &roll);

    return roll;
}

// -in a separate function roll the die
int rollDie(int roll, int arrInt[], int sides)
{
    int i;
    int rInt;

    for (i = 0; i < roll; i++)
    {
        rInt = rand() % sides;
        arrInt[rInt]++;
    }
}

// -In a separate function print out the results.
int printOut(int arrInt[], int sides)
{
    for (int i = 0; i < sides; i++)
    {
        printf("%d = %d\n", i + 1, arrInt[i]);
    }
}
