#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int x, i, y, account, q, choice;
    char name[30];
    double balance;
    int true = 1;

    FILE *wptr, *rptr;
    wptr = fopen("output.txt", "w");
    rptr = fopen("input.txt", "r");
    //do cat output.txt to print out what u entered

    if (wptr == NULL)
    {
        puts("error");
    }
    else
    {
        // while (q != -1)
        // {
        //     printf("what is the account number? or type -1 to exit\n");
        //     scanf("%d", &account);

        //     printf("what is the name?\n");
        //     scanf("%29s", name);
        //     //29s formats the output

        //     printf("what is the balance?\n");
        //     scanf("%lf", &balance);

        //     fprintf(wptr, "%d %29s %lf \n", account, name, balance);

        //     printf("Type -1 to exit");
        //     scanf("%d", &q);
        // }
        while (choice != 4)
        {
            puts("enter 1 to display positive balance");
            printf("Enter a choice or enter 4 to exit\n");
            scanf("%d", &choice);

            if (choice == 1)
            {
                while (!feof(rptr))
                {
                    fscanf(rptr, "%d %s %lf", &account, name, &balance);
                    if (balance < 0)
                    {
                        printf("%d %s %.2lf \n", account, name, balance);
                    }
                }
                
            }
            rewind(rptr);
        }
    }
    fclose(rptr);
    fclose(wptr);
    return EXIT_SUCCESS;
}