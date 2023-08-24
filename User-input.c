#include <stdio.h>
int main(){
    int number, i, sum = 0;
    // Take number from user
    printf("Enter number :");
    scanf("%d", &i);
    // Find Even numbers and its sum
    for (number = 1; number <= 10; number++){
        if (number % 2 == 0){

            sum = sum + number;
            printf("\nEven numbers is : %d", number);
        }}
    printf("\nSum is : %d", sum);
    // Find Odd numbers and its sum
    for (number = 1; number <= 10; number++){
        if (number % 2 != 0){
            
            sum = sum + number;
            printf("\nOdd numbers is : %d", number);
        }}
    printf("\nSum is : %d", sum);
    return 0;
}
