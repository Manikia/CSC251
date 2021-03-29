#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void lowercaseOutput(char stringInput);
// int uppercaseOutput();
// int vowelOutput();
// int inputNumCalc();

int main(void)
{
    //created a pointer for string input
    char stringInput[20];

    // uppercaseOutput();
    // vowelOutput();
    // inputNumCalc();

    printf("Enter a string less than 20 characters that includes one number\n");
    //scanf("%s", stringInput);
    fgets(stringInput, 19, stdin);
    printf("You typed %s \n", stringInput);

    lowercaseOutput(stringInput);

    return EXIT_SUCCESS;
}

//function to print all lowercase letters from input
void lowercaseOutput(char stringInput[])
{
    char character;
    int i;
    for (i = 0; i < 20; i++)
    {
        if (islower(stringInput[i]))
        {
            // while ((character = getchar()) != '\n')
            // {
            //     stringInput[i++] = character;
            // }
            printf("you printedd %c", stringInput[i]);
        }
    }
}

// //function to print all uppercase letters from inputs
// int uppercaseOutput()
// {
// }

// //function will print out all the vowels in the input
// int vowelOutput()
// {
// }

// //function will grab the number inputted and multiply it by 12 and output
// int inputNumCalc()
// {
// }