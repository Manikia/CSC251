// Create a program that takes 2 arguments from the terminal. The first argument is an
//infile (which will be a .txt wordlist) and the second argument is an outfile.
// Prompt the user with 4 options on how to manipulate the wordlist. After the program
//completes the outfile should contain the modified wordlist.

/* ./l wordlist.txt manipulate.txt
then itll prompt to what modification to do

Choose an option below to modify your wordlist
1. Change the second letter to a capital letter.
2. Make each word lowercase except for the last letter.
3. Make each word uppercase except for the first letter.
4. Duplicate each word 5 times and display the word with
it's duplicate # after it. (word1) one word per line.
5. Exit program

*/
// Wordlist complete. Check "outfile.txt" for results.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int x, y, z, i, choice = 0;
    char c;
    FILE *wordlist, *manipulateToChange;
    //two files, wordlist and manipulate that changes wordlist input

    printf("You used %d arguments. \n", argc);

    printf("1st arge = %s \n 2nd arg = %s \n 3rd arg = %s \n", argv[0], argv[1], argv[2]);

    if (argc != 3)
    {
        puts("Program requires 3 arguments..../a.out arg2 arg3\n");
    }
    else
    {
        wordlist = fopen(argv[1], "r");
        if (wordlist == NULL)
        {
            printf("Couldn't open %s \n", argv[1]);
        }
        else
        {
            manipulateToChange = fopen(argv[2], "w");
            while (choice != 5)
            {
                printf("Choose an option below to modify your wordlist\n");
                printf("1. Change the second letter to a capital letter.\n"); //done
                printf("2. Make each word lowercase except for the last letter.\n");
                printf("3. Make each word uppercase except for the first letter.\n");                                                       //done
                printf("4. Duplicate each word 5 times and display the word with it's duplicate # after it. (word1) one word per line.\n"); //done
                printf("5. Exit program.\n");
                scanf(" %d", &choice);

                //rewind(wordlist);
                //decision 1 - 5
                switch (choice)
                {
                case 1:
                {
                    int letterCounter = 1;

                    while ((c = getc(wordlist)) != EOF)
                    {
                        if (c == '\n')
                        {
                            letterCounter = 0;
                        }
                        if (letterCounter == 2)
                        {
                            fputc(toupper(c), manipulateToChange);
                        }
                        else
                        {
                            fputc(c, manipulateToChange);
                        }
                        letterCounter++;
                    }
                    rewind(wordlist);
                    fprintf(manipulateToChange, "\n");

                    break;
                }
                case 2:
                {
                    char word[25];
                    int i = 0;

                    while (!feof(wordlist))
                    // //while ((c = getc(wordlist)) != EOF)
                    {

                        fprintf(manipulateToChange, "\n");
                        fscanf(wordlist, "%s", word);

                        int length = strlen(word);

                        word[length - 1] = toupper(word[length - 1]);
                        fprintf(manipulateToChange, "%s", word);
                    }
                    rewind(wordlist);
                    break;
                }
                case 3:
                {
                    fprintf(manipulateToChange, "\n");
                    fprintf(manipulateToChange, "\n");
                    int letterCounter = 2;

                    while ((c = getc(wordlist)) != EOF)
                    {
                        if (c == '\n')
                        {
                            letterCounter = 1;
                        }
                        if (letterCounter == 2)
                        {
                            fputc(tolower(c), manipulateToChange);
                        }
                        else
                        {
                            fputc(toupper(c), manipulateToChange);
                        }
                        letterCounter++;
                    }

                    fprintf(manipulateToChange, "\n");
                    rewind(wordlist);
                    break;
                }
                case 4:
                {
                    int letterCounter = 1;
                    int i;
                    char word[25];

                    while (!feof(wordlist))
                    //while ((c = getc(wordlist)) != EOF)
                    {

                        fprintf(manipulateToChange, "\n");
                        fscanf(wordlist, "%s", word);

                        for (i = 1; i <= 5; i++)
                        {
                            fprintf(manipulateToChange, "%s%d\n", word, i);
                        }
                    }

                    rewind(wordlist);
                    break;
                }
                }
            }
        }
    }
    fclose(manipulateToChange);
    fclose(wordlist);

    return EXIT_SUCCESS;
}