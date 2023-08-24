#include <stdio.h>
int main()
{
    int Days, Year;
    //Ask user to input number of years
    printf("Enter year: ");
    scanf("%d", &Year);
    // Ignoring leap year
    Days = (Year * 365);
    //Print the result
    printf("DAYS: %d\n", Days);
    return 0;
}