#include <stdio.h>

void pattern(int a);

int main()
{
    pattern(5);

    return 0;
}

void pattern(int a)
{
    for (int d = 1; d <= a; d++)
    {
        printf("\n");
        for (int e = 1; e <= d; e++)
        {
            int ans = (e % 2);
            printf("%d ", ans);
        }
    }
}