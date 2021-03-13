//Monika Angel
//CSC251
//3/13/21
//ec2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dieType, roll, i, sides;

    printf("Choose from a 4-sided, 6-sided, 8-sided, 10-sided, 12-sided, 20-sided, or a 100-sided die by entering the number of sides: ");
    scanf(" %d", &dieType);

    printf("How many times would you like to roll the die? ");
    scanf(" %d", &roll);

    srand(time(NULL));

    int amount = 0;

    for (i = 0; i < roll; i++)
    {
        sides = rand() % dieType;

        amount = amount + sides;
        printf(" %d", sides);

        //gives comma after every output until theres none
        if (i < roll - 1)
        {
            printf(",");
        }
    }
    int total = 0;
    int winsLose = 0;

    total = roll * dieType;

    printf("\n%d out of %d\n", amount, total);

    winsLose = (total / 2.0);
    if (amount < winsLose + 1)
    {
        //since they wanted 51% as a lose
        printf("You lost the game\n");
    }
    else if (amount > winsLose)
    {
        //since they wanted 50% and above a win
        printf("You won the game\n");
    }

    return EXIT_SUCCESS;
}
