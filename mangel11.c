//Monika Angel
//CSC251
//Lab11
//04/19/21

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

    if (argc != 3)
    {
        puts("Program requires 2 arguments..../a.out arg2 arg3\n");
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
                        char string[25];
                        int i = 0;

                        while (!feof(wordlist))
                        // //while ((c = getc(wordlist)) != EOF)
                        {

                            fprintf(manipulateToChange, "\n");
                            fscanf(wordlist, "%s", string);

                            int length = strlen(string);

                            string[length - 1] = toupper(string[length - 1]);
                            fprintf(manipulateToChange, "%s", string);
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
                        char string[25];

                        while (!feof(wordlist))
                        //while ((c = getc(wordlist)) != EOF)
                        {

                            fprintf(manipulateToChange, "\n");
                            fscanf(wordlist, "%s", string);

                            for (i = 1; i <= 5; i++)
                            {
                                fprintf(manipulateToChange, "%s%d\n", string, i);
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

    printf("Wordlist complete. Check %s for results.\n", argv[2]);

    return EXIT_SUCCESS;
}