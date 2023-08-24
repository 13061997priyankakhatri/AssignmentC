#include<stdio.h>
int main()
{
	float l,b,area;
	printf("Enter the l : ");
	scanf("%f",&l);
	printf("Enter the b : ");
	scanf("%f",&b);
	area = 0.5*l*b;
	printf("%f is area of a triangle",area);
	return 0;
}
