#include <stdio.h>
int max();
int main()
{   
    max();
    return 0;
}

int max()
{
    int number_of_elements;
    printf("How many elements do you want to enter? \n");
    scanf("%d", &number_of_elements);

    int arr[number_of_elements];
    for(int j = 0 ; j < number_of_elements ; j++)
    {   
        int value;
        printf("\nEnter %d value : ", j+1 );
        scanf("%d", &value);

        arr[j] = value ;

    }
    int max = arr[0];
    for(int i = 1 ; i < number_of_elements ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nLargest element is %d.",max); 
}