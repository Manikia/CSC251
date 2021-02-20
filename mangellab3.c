int main(void)
{
        int x, y=0, z = 0, i,grade = 0;
        double average = 0.0;
        char entry;i


        printf("enter a value: ");
        scanf("%d",&y);

        printf("%d\n",--y);
        printf("%d\n",y--);
        printf("%d\n",y--);
        printf("%d\n",--y);


/*

        printf("Please enter a grade:");
        scanf("%c",&entry);

        switch(entry) // entry is the variable you are comparing
        {
                case 'a':
                {
                        puts("That is an A");
                        break;
                }
                case 'b':
                {
                        puts("That is a B");
                        break;
                }
                case 'c':
                {
                        puts("That is a C");
                        break;
                }
                default:
                {
                        puts("sad face");
                        break;
                }

        }
*/


/*
        printf("How many grades would you like to enter: "); // no \n so we can let user type after :
        scanf(" %d", &y);

        for (i = 0; i<y; i++)
        {
                printf("Enter a grade: ");
                scanf(" %d", &grade);

                z = z + grade;
        }

        average = z / (double)y;
        printf("Average grade = %.2lf \n", average);
*/

/*
        while((grade <= 0) || (grade > 100)){
                printf("Enter a grade (0-100) \n");
                scanf("%d", &grade);
        }



        if(grade > 70)
        {
                puts("You Passed!");
        {
        else if((grade > 60) && (grade <= 70))
        {
                puts("You almost passed!");
        }
        else
        {
                puts("To bad, better luck next time.");
        }
*/
        return EXIT_SUCCESS;
}