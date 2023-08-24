#include<stdio.h>

int main(){
    
    /*Switch statement*/

    char ch;
    printf("Enter Character : ");
    scanf("%c",&ch);

    //condition to check character is alphabet or not
    if ( ( ch >= 'A' && ch <= 'Z' ) || ( ch >= 'a' && ch <= 'z' ))
    {

        //check for VOWEL or CONSONANT
        switch (ch)
        {

        case 'A': printf("%c is a Vowel.",ch);
                break;
        case 'E': printf("\n%c is a Vowel.",ch);
                break;    
        case 'I': printf("\n%c is a Vowel.",ch);
                break;    
        case 'O': printf("\n%c is a Vowel.",ch);
                break;    
        case 'U': printf("\n%c is a Vowel.",ch);
                break;    
        case 'a': printf("\n%c is a Vowel.",ch);
                break;    
        case 'e': printf("\n%c is a Vowel.",ch);
                break;
        case 'i': printf("\n%c is a Vowel.",ch);
                break;
        case 'o': printf("\n%c is a Vowel.",ch);
                break;
        case 'u': printf("\n%c is a Vowel.",ch);
                break;
        default: printf("\n%c is a Consonant.",ch);

        }

    }

    else
    {
        printf("\n%c is not an alphabet.",ch);
    }
    
    return 0;
}