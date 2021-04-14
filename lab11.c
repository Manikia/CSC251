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
        puts("Program requires 3 arguments..../a.out arg2 arg3\n");
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
                scanf("%d\n", &choice);

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