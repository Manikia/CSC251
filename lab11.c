// Create a program that takes 2 arguments from the terminal. The first argument is an infile (which will be a .txt wordlist) and the second argument is an outfile.
// Prompt the user with 4 options on how to manipulate the wordlist. After the program completes the outfile should contain the modified wordlist.
// //sample output
// ./wlmanipulation infile.txt outfile.txt
// Choose an option below to modify your wordlist
// 1. Change the second letter to a capital letter.
// 2. Make each word lowercase except for the last letter.
// 3. Make each word uppercase except for the first letter.
// 4. Duplicate each word 5 times and display the word with it's duplicate # after it. (word1) one word per line.
// 5. Exit program

// Wordlist complete. Check "outfile.txt" for results.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int x, y, z, i, choice = 0;
    char c;
    FILE *rptr, *wptr;

    printf("You used %d arguments. \n", argc);

    printf("1st arge = %s \n 2nd arg = %s \n 3rd arg = %s \n", argv[0], argv[1], argv[2]);

    if (argc != 3)
    {
        puts("Program requires 3 arguments... ./a.out arg2 arg3\n");
    }
    else
    {
        rptr = fopen(argv[1], "r");
        if (rptr == NULL)
        {
            printf("Couldn't open %s \n", argv[1]);
        }
        else
        {
            wptr = fopen(argv[2], "w");
            while (choice != 5)
            {
                puts("Menu");
                puts("1. copy the first file to the second file");
                puts("5. Exit program");
                puts("Enter choice");
                scanf(" %d", &choice);

                if (choice == 1)
                {
                    while (!feof(rptr))
                    {
                        c = getc(rptr);
                        fputc(c, wptr);
                    }
                }
            }
        }
    }
    fclose(rptr);
    fclose(wptr);

    return EXIT_SUCCESS;
}