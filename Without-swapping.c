#include<stdio.h>
int main()
{
	//Without swapping
	int P = 13 , U = 30;
	printf("Before swap P is %d and U is %d", P , U );
	P = P + U;//P = 13 + 30 = 43
	U = P - U;//U = 43 - 30 = 13
	P = P - U;//P = 43 - 13 = 30
	printf("\nAfter swap P is %d and U is %d", P , U );
	return 0;
}
