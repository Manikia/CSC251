//Monika Angel
//CSC251
//2/21/21
//Lab5

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

int prompt(void);
void rGen(int roll, int arrInt[]);
void output(int roll, int arrInt[]);

int main(void)
{
	int arrInt[8] = {0};
	//limited amount of side (0-7)

	int roll = prompt();
	//getting rolls inside prompt

	rGen(roll, arrInt);
	//getting roll and array initialized in here
	output(roll, arrInt);

	//variables inside these functions arent calling outside of main
	//theyre referencing intitia

	return EXIT_SUCCESS;
}

//promting user
int prompt(void)
{
	int roll;
	printf("How many times would you like to roll the 8 sided die? ");
	scanf(" %d", &roll);

	return roll;
}

void rGen(int roll, int arrInt[])
{
	int i, sides;

	srand(time(NULL));

	for (i = 0; i < roll; i++)
	{
		sides = rand() % 8;

		arrInt[sides]++;
	}
}

void output(int roll, int arrInt[])
{
	printf("You had:\n%d one's,\n%d two's,\n%d three's,\n%d four's,\n%d five's,\n%d six's,\n%d seven's, \n%d eight's \n",
		   arrInt[0], arrInt[1], arrInt[2], arrInt[3], arrInt[4], arrInt[5], arrInt[6], arrInt[7]);
}