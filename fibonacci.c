#include <stdio.h>

int main()
{

    int left = 0, right = 1, number, answer;

    printf("Enter number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
        {
            printf("%d ", 0);
        }
        if (i == 2)
        {
            printf("%d ", 1);
        }
        else
        {
            answer = left + right;
            printf("%d ", answer);
            left = right;
            right = answer;
        }
    }

    return 0;
}