// Create a program that will read from a file named "input.txt" that follows the same format from class.
// The program will prompt a user for input. The user will choose from 4 choices:
// 1. Display all positive balance accounts.
// 2. Display all negative balance accounts.
// 3. Display all zero balance accounts.
// 4. End program.
// The program will display the contents of the file based on the user input.
// The program will write the result of all choices made to a file named "output.txt"
// Submit the program that prompts for user input.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    // FILE *fp;

    // printf("Enter name of a file you wish to see\n");
    // gets(file_name);

    // fp = fopen(file_name, "r");

    int positiveBalance, negativeBalance, zeroBalance;
    int c, input;
    FILE *fileInput;
    char stringText;
    fileInput = fopen("input.txt", "r");

    // The program will prompt a user for input. The user will choose from 4 choices:
    printf("Choose from one of the four choices below:");
    printf("\nDisplay all positive balance accounts by inputting 1 \nDisplay all negative balance accounts by inputting 2 \nDisplay all zero balance accounts by inputting 3\n");
    scanf("%d", &input);

    //DONT FORGT TO FORMAT SWITCH
    switch (input)
    {
    case 1:
    {
        //positiveBalance
        if (fileInput)
        {
            while ((c = getc(fileInput)) != EOF)
                putchar(c);
            fclose(fileInput);
        }
        printf("\n");
    }
    case 2:
    {
        //negativeBalance
    }
    case 3:
    {
        //zero balance
    }
    default:
    {
    }
    }

    return EXIT_SUCCESS;
}