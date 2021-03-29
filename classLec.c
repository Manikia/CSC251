#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char string[20] = {0};
    int i = 0;

    puts("enter a string no longer than 19 chars\n");
    fgets(string, 19, stdin);

    //if we want to know if its uppercase we do:
    for (i = 0; i < 20; i++)
    {
        if (islower(string[i]))
        {
            string[i] = toupper(string[i]);
        }
        else
        {
            string[i] = tolower(string[i]);
        }
    }

    puts("Turning to uppercase and lowercase: \n");
    puts(string);

    return EXIT_SUCCESS;
}