#include<stdio.h>
int main()
{

/*Switch statement*/

    char day;//m-mon; t-tues; w-wed; T-turs; f-fri; s-sat; S-sun;
    printf("Enter day(m-S) : ");
    scanf("%s",&day);

    switch (day)
    {

    case 'm': printf("Monday");
            break;
    case 't': printf("\nTuesday");
            break;    
    case 'w': printf("\nWednusday");
            break;    
    case 'T': printf("\nTursday");
            break;    
    case 'f': printf("\nFriday");
            break;    
    case 's': printf("\nSaterday");
            break;    
    case 'S': printf("\nSunday");
            break;
    default: printf("\nNot a valid day!");
    
    }
    return 0;
}