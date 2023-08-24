    #include<stdio.h>
    
    int main(){
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    int fact = 1;
    for(int i = 1 ; i <= number ; i++){
        fact = fact * i;
    }
    printf("Final factorial is : %d", fact);
        return 0;
    }