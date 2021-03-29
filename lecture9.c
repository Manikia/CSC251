#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char string[20] = "hello world";
    char string1[] = "hello world";
    char string2[20] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char c;
    int y, i = 0;
    double x = 0.0;
    char *pntr;

    //terminating character is considered as a char so the size
    //will be to 19 instead of 20, so we have to do +1 for char
    //the '\0' means its the end of the string

    printf("String = %s \n", string);
    printf("String1 = %s \n", string1);
    printf("String2 = %s \n", string2);

    puts("enter a string no longer than 19 chars");
    fgets(string, 19, stdin);
    //3 different inputs^
    //if we were to put %c it would just print the first char
    //but bc we did %s it prints the whole string
    //scanf("%s", string);
    //instead of & we just add the array name

    printf("You typed %s \n", string);

    strcpy(string1, string);

    printf("%s is in string1 now \n", string1);

    //if we want to know if its uppercase we do:
    for (i = 0; i < 20; i++)
    {
        if (islower(string[i]))
        {
            printf("%c is lower \n", string[i]);
            string[i] = toupper(string[i]);
        }
        else
        {
            printf("%c is not lower \n", string[i]);
            y = string[i] - 48;
            printf("%d is the number value \n", y);
        }
    }

    puts("Turning to uppercase: \n");
    puts(string);

    x = strtod(string, &pntr);

    for (i = 0; i < 20; i++)
    {
        printf("%d is %c \n", string[i], string[i]);
    }

    printf("%lf = number and %s is new string", x, pntr);

    while ((c = getchar()) != '\n')
    {
        string[i++] = c;
    }
    printf("You typed %s \n", string);
    //puts(string);

    return EXIT_SUCCESS;
}