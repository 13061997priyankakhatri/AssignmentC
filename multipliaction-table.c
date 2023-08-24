#include <stdio.h>

int main()
{

    int number, p;

    printf("Enter number : ");
    scanf("%d", &number);

    for (p = 1; p <= 10; p++)
    {
        printf("\nYour output is %d = %d x %d", number, p, number * p);
    }

    return 0;
}