#include <stdio.h>
int main()
{
    int Year;
    printf ("Enter a year : ");
    scanf ("%d", &Year);

    if ( Year % 4 == 0 && Year % 100 == 0 && Year % 400 == 0 )
    {
        printf("It is LEAP YEAR.");
    }

    else if (Year % 4 == 0 && Year % 100 != 0)
    {
        printf("It is LEAP YEAR.");
    }

    else
    {
        printf ("It is NOT LEAP YEAR.");
    }

    return 0;
}
