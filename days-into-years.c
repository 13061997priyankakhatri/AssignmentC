#include <stdio.h>
int main()
{
    int Days, Years;
    //Ask user to input number of days
    printf("Enter days: ");
    scanf("%d", &Days);
    // Ignoring leap year
    Years = (Days / 365);
    //Print the result
    printf("YEARS: %d\n", Years);
    return 0;
}
