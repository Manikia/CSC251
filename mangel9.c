//Monika Angel
//CSC251
//3/29/21
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void lowercaseOutput(char stringInput[]);
void uppercaseOutput(char stringInput[]);
void vowelOutput(char stringInput[]);
int inputNumCalc(char stringInput[]);

int main(void)
{
    char stringInput[20];
    printf("Enter a string less than 20 characters that includes one number\n");
    //scanf("%s", stringInput);
    fgets(stringInput, 20, stdin);
    printf("\nYou typed\n%s", stringInput);

    lowercaseOutput(stringInput);
    uppercaseOutput(stringInput);
    vowelOutput(stringInput);

    int digit = inputNumCalc(stringInput);
    int newDigit = 0;
    newDigit = digit * 12;

    printf("(Number Entered in string)%d * 12 = %d\n", digit, newDigit);

    return EXIT_SUCCESS;
}

//function to print all lowercase letters from input
void lowercaseOutput(char stringInput[])
{
    char character;
    int i;
    char lower;
    puts("\n\nLowercase letters:");

    for (i = 0; i < 20; i++)
    {
        if (islower(stringInput[i]) || isspace(stringInput[i]))
        {
            //checks if its lowercase and also if theres a space
            printf("%c", stringInput[i]);
        }
    }
}

void uppercaseOutput(char stringInput[])
{
    int i;
    int resultIndex = 0;
    char result[20];
    puts("\n\nUppercase Letters:");

    for (i = 0; i < 20; i++)
    {
        if (isupper(stringInput[i]))
        {
            //printf("%c", stringInput[i]);
            result[resultIndex++] = stringInput[i];
        }

        else if (isspace(stringInput[i]))
        {
            result[resultIndex++] = stringInput[i];
            //printf(" ");
        }
    }

    for (i = 0; i < 20; i++)
    {
        if (i == 0 && isspace(result[0]))
        {
        }
        else
        {
            printf("%c", result[i]);
        }
    }
}

void vowelOutput(char stringInput[])
{
    char character;
    int vowel = 0;
    int i = 0;

    puts("\n\nNumber of Vowels:");
    for (i = 0; i < 20; i++)
    {
        switch (stringInput[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
        {
            vowel++;
        }
        }
    }
    printf("%d", vowel);
}

int inputNumCalc(char stringInput[])
{
    int i;
    int digit;
    puts("\n\n");

    for (i = 0; i < 20; i++)
    {
        if (isdigit(stringInput[i]))
        {
            digit = stringInput[i] - '0';
            //returns as an int instead of ascii
        }
    }
    return digit;
}