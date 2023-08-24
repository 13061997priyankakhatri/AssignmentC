#include <stdio.h>

void main()
{
    int number[100],tmp,n,p,u;
	
	printf("\nsort elements of array in descending order : \n");
    printf("----------------------------------------------\n");	

    printf("How many elements you have to enter ?");
    scanf("%d", &n);

    printf("Before sorting elements are : \n",n);
    for(p=0;p<n;p++){
	   printf("element - %d : ",p);
	   scanf("%d",&number[p]);
	}
    for(p=0; p<n; p++)
    {
        for(u=p+1; u<n; u++)
        {
            if(number[p] < number[u])
            {
                tmp = number[p];
                number[p] = number[u];
                number[u] = tmp;
            }
        }
    }

    printf("\nAfter sorting elements are : \n");
    for(p=0; p<n; p++)
    {
        printf("%d  ", number[p]);
    }
	printf("\n\n");
}
