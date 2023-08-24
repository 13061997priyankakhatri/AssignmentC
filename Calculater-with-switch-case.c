#include<stdio.h>
int main()
{
	int number1 , number2 ;
	char ch;

	printf("\nEnter the operator from '+,-,/,*,%' :");
	scanf("%c",&ch);
	
	printf("\nEnter two numbers : ");
	scanf("%d %d",&number1,&number2);

	switch (ch)
	{
		case '+':printf("\n %d + %d = %d", number1, number2, number1 + number2);
			break;

		case '-':printf("\n %d - %d = %d", number1, number2, number1 - number2);
			break;

		case '*':printf("\n %d * %d = %d", number1, number2, number1 * number2);
			break;

		case '/':printf("\n %d / %d = %d", number1, number2, number1 / number2);
			break;

		case '%':printf("\n %d '%' %d = %d", number1, number2, number1 % number2);
			break;

		default:printf("Not an appropriate operator.");
			break;
	}

	return 0;
}