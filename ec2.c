//Monika Angel
//CSC251
//3/1/21
//Lab 70
// Create a program that does the following:

// Prompt the user to choose from a 4-sided, 6-sided, 8-sided,
//10-sided, 12-sided, 20-sided, or a 100-sided die.
// Prompt the user to choose how many times they would like to roll the die.
// Display each roll.
// Display the total value of all rolls added together.
// If the total is Greater than 50%, Display a win message for the user.
// If the total is less than 51%, display a lose message for the user.

// //sample output

// Choose from a 4-sided, 6-sided, 8-sided, 10-sided, 12-sided,
//20-sided, or a 100-sided die by entering the number of sides: 10
// How many times would you like to roll? 5
// 4, 6, 2, 1, 4
// 17 out of 50

// I regret to inform you that you have lost the game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int roll, i;
    int die, sides, total = 0;
    int arrInt[10] = {0};
    int amount;

    srand(time(NULL));

    printf("Choose from a 4-sided, 6-sided, 8-sided, 10-sided, 12-sided, 20-sided, or a 100-sided die by entering the number of sides: ");
    scanf(" %d", &die);
    printf("How many times would you like to roll the die? ");
    scanf(" %d", &roll);

    //rolling and recording the sides of dice
    for (i = 0; i < roll; i++)
    {
        sides = rand() % die;
        //maybe add 1 if it doesnt work
        arrInt[sides]++;
    }
    printf("addition:  %d\n", amount);
    //IM TRYING TO ADD UP ALL THE SIDES TO MAKE THE NUMBERATOR BUT IT DOESNT WORK
    switch (die)
    {
    case 4:
    {
        //out of percentage
        total = roll * die;
        arrInt[sides];
        //I calculated the denomiator for the percentage thing
        //printf(" %d", total); //this is for proof check

        break;
    }
    default:
    {
        puts("Invalid Entry");
        break;
    }
    break;
    }

    return EXIT_SUCCESS;
}
