/*Create a program that will count the number of grades a user enters and display the total for each type of grade and the class average.
A=4.0, B=3.0, C=2.0, D=1.0, F=0
Submit the source code using the same naming convention as discussed in class.
Put the runtime output in the comments section of your submission.

//Sample output
Enter a letter grade (press q to quit): A
Enter a letter grade (press q to quit): a
Enter a letter grade (press q to quit): b
Enter a letter grade (press q to quit): B
Enter a letter grade (press q to quit): d
Enter a letter grade (press q to quit): D
Enter a letter grade (press q to quit): c
Enter a letter grade (press q to quit): C
Enter a letter grade (press q to quit): f
Enter a letter grade (press q to quit): F
Enter a letter grade (press q to quit): q
There are 2 A's, 2 B's, 2 C's, 2 D's, and 2 F's
The class average is 2.0
*/



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
