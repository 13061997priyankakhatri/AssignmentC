#include<stdio.h>

int main(){

    int P,R,T,SimpleInterest;

    printf("Enter p : ");
    scanf("%d",&P);

    printf("Enter r : ");
    scanf("%d",&R);

    printf("Enter t : ");
    scanf("%d",&T);

    SimpleInterest = P * R * T * 100;
    printf("Final Simple Interest is : %d",SimpleInterest);
    
    return 0;
}