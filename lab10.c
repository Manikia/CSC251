#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int x, i, y, account, q;
    char name[30];
    double balance;
    int true = 1;

    FILE *wptr;
    wptr = fopen("output.txt", "w");
    //do cat output.txt to print out what u entered

    while (q != -1)
    {
        printf("what is the account number? or type -1 to exit\n");
        scanf("%d", &account);

        printf("what is the name?\n");
        scanf("%29s", name);
        //29s formats the output

        printf("what is the balance?\n");
        scanf("%lf", &balance);

        fprintf(wptr, "%d %29s %lf \n", account, name, balance);

        printf("Type -1 to exit");
        scanf("%d", &q);
    }

    return EXIT_SUCCESS;
}