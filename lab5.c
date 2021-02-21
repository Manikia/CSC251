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
    printf("How many times would you like to roll the dice? ");
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
    printf("You had:\n%d one's,\n%d two's,\n%d three's,\n%d four's,\n%d five's,\n%d six's,\n%d seven%d eight's \n",
           arrInt[0], arrInt[1], arrInt[2], arrInt[3], arrInt[4], arrInt[5], arrInt[6], arrInt[7]);
}