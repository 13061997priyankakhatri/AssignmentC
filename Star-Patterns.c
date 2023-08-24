#include<stdio.h>

int main(){

    // Triangle Star Pattern
    
    int p, u;

    printf("Enter the number of rows : ");
    scanf("%d", &p);

    u = p;

    for (int n = 1; n <= p; n++){
        for (int j = 1; j <= u - 1; j++){
            printf("   ");
        }
        for (int r = 1; r <= 2 * n - 1; r++){
            printf(" * ");
        }
        u--;
        printf("\n");
    }
    
    return 0;
}