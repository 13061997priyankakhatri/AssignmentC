#include<stdio.h>

int main(){

    // Cross Triangle Star Pattern

    int p, u = 1;

    printf("Enter the number of columns : ");
    scanf("%d", &p);

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = p - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}