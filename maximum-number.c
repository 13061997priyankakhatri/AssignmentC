#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three number : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("n1 is maximum.");
	}
	else if(n2>n3 && n2>n1)
	{
		printf("n2 is maximum.");
	}
	else
	{
		printf("n3 is maximum.");
	}
	
	return 0;
}