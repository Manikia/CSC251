//Monika Angel
//4/7/2021
//CSC251
//Lab10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int account, input;
    double balance;
    char name[30];

    FILE *fileInput, *fileOutput;

    fileOutput = fopen("output.txt", "w");
    fileInput = fopen("input.txt", "r");

    printf("Choose from one of the four choices below or press -1 to exit:");

    if(fileOutput == NULL)
    {
        puts("ERROR");
    }
    else
    {
        while (input != -1)
        {
            // The program will prompt a user for input. The user will choose from 4 choices:
            printf("\nDisplay all positive balance accounts by inputting [1]\nDisplay all negative balance accounts by inputting [2]\nDisplay all zero balance accounts by inputting [3]\n");
            scanf("%d", &input);

            switch (input)
            {
                case 1:
                {
                    fprintf(fileOutput, "Output:\n");
                    //positiveBalance
                    //opens whole file
                    // if (fileInput)
                    // {
                    //     while ((c = getc(fileInput)) != EOF)
                    //         putchar(c);
                    //     fclose(fileInput);
                    // }
                    // printf("\n");

                    while (!feof(fileInput))
                    {
                        fscanf(fileInput, "%d %s %lf", &account, name, &balance);
                        if (balance > 0)
                        {
                            printf("%d %s %.2lf \n", account, name, balance);
                            fprintf(fileOutput, "%d %s %.2lf\n", account, name, balance);
                        }
                    }

                    rewind(fileInput);
                    break;
                }
                case 2:
                {
                    fprintf(fileOutput, "Output:\n");
                    //negativeBalance
                    while (!feof(fileInput))
                    {
                        fscanf(fileInput, "%d %s %lf", &account, name, &balance);
                        if (balance < 0)
                        {
                            printf("%d %s %.2lf \n", account, name, balance);
                            fprintf(fileOutput, "%d %s %.2lf\n", account, name, balance);
                        }
                    }

                    rewind(fileInput);
                    break;
                }
                case 3:
                {
                    fprintf(fileOutput, "Output:\n");
                    //zero balance
                    while (!feof(fileInput))
                    {
                        fscanf(fileInput, "%d %s %lf", &account, name, &balance);
                        if (balance == 0)
                        {
                            printf("%d %s %.2lf \n", account, name, balance);
                            fprintf(fileOutput, "%d %s %.2lf\n", account, name, balance);
                        }
                    }
                    rewind(fileInput);
                    break;
                }
                default:
                {
                    fclose(fileOutput);
                    puts("exit");
                    break;
                }
            }

            fprintf(fileOutput, "\n");
        }
    }

    fclose(fileInput);
    return EXIT_SUCCESS;
}