#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Create a program that prompts a user for a string less than 20 characters.
// The main program will call four separate functions.

// One function will print all the lower case letters.
// One function will print all the upper case letters.
// One function will print the total number of vowels in the string.
// One function will save the number that was entered into the string as
//an integer variable and pass it back to the main function where it will be
//multiplied by 12 then printed out.

// You must pass all values to the functions by reference.

// Sample output
// Enter a string less than 20 characters that includes one number.
// this IS my 2 STRING
// Lowercase letters:
// this my
// Uppercase letters:
// IS STRING
// Number of Vowels:
// 4
//(Number Entered in string)2 * 12 = 24

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