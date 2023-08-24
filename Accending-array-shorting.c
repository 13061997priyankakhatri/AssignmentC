#include<stdio.h>
int main()
{
	int p,u,n,number[100],temp;
	printf("How many elements you have to enter? ");
	scanf("%d",&n);
	printf("Enter elements : ");
	
	for(p=0;p<n;p++)
	{
		scanf("%d",&number[p]);
	}
	printf("Before sorting elements are : \n");
	for(p=0;p<n;p++)
	{
		printf("%d\t", number[p]);
	}
	for(p=0;p<n;p++)
	{
		for(u=p+1;u<n;u++)
		{
			if(number[p]>number[u])
			{
				temp=number[p];
				number[p]=number[u];
				number[u]=temp;
			}
		}
	}
	printf("\nAfter sorting elements are: \n",number[0]);
	for(p=0;p<n;p++)
	{
		printf("%d\t",number[p]);
	}
	
	return 0;
}
