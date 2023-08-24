#include<stdio.h>
int main()
{
    int  number1 , number2 , sum = 0;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&number1,&number2);
    
    for (int i = number1; i <= number2; i++)
    {
        sum = sum + i;
    }

    printf("%d",sum);
    
    return 0;

}