//Monika Angel
//CSC 251
// 2.3.21
// Lab #2

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//int x, y = 0, z = 1;
	//x = 0;
	//additional variables from above is for personal help
	//doesnt incorporate in this lab

	int x = 0, magic = 12, guessed, sum, mul, sub;
	
		printf("Enter a number between 1 and 10 inclusive. ");
		scanf("%d", &x);
		//&x means address of x
		//%d means integer
		printf("You entered %d\n", x);
	
	if((x <= 1) || (x >= 10))
	{
		printf("\nChoose another integer 1-10 inclusive\n");
		return main();
	}
	
	else
	{
		//in class: y = x + z;

		sum = x + magic;
		mul = x * magic;
		sub = x - magic;
	
		printf("%d + magic number = %d", x, sum);
		printf("\n%d * magic number = %d", x, mul);
		printf("\n%d - magic number = %d", x, sub);
	
		printf("\nGuess the magic number?\n");
		scanf("%d", &guessed);

		if(guessed == magic)
		{
			puts("You are correct! You win");
			//to print only strings we do puts()
			//then it can automatically print in a new line
		}
			else
				puts("You lose");
			
	}
	return EXIT_SUCCESS;
}
