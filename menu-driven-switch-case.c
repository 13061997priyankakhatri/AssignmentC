#include<stdio.h>
int main()
{
	int p , u;
	char choice;
	
	printf("----------------------------------------Manu of the Program------------------------------------");

	printf("\nEnter'+'for addition,Enter'-'for subtraction,Enter'*'for multiplication,Enter'/'for division.");	

	printf("\nEnter your choice : ");
	scanf("%c", &choice);

	printf("Enter two values : ");
	scanf("%d %d", &p, &u);
	
	switch(choice)
	{
		case '+':printf("%d + %d = %d", p , u , p + u );
				break;
		case '-':printf("%d - %d = %d", p , u , p - u );
				break;
		case '*':printf("%d * %d = %d", p , u , p * u );
				break;
		case '/':printf("%d / %d = %d", p , u , p / u );
				break;
		default:printf("You enter wrong choice.");
	}

	return 0;
}
