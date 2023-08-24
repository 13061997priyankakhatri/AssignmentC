#include <stdio.h>

int main()
{
    char alphabet = 'A';

    for(int i=1;i<=5;i++)
    {
        printf("\n ");

        for(int j=0;j<i;j++)
        {
            printf("%c ",alphabet);
            alphabet++;
        }
    }

    return 0;
}