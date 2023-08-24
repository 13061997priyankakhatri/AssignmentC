#include<stdio.h>

int main()
{
    char name[]="Priyanka";
	int p,length;

	for(p=0; name[p] != '\0';p++)
	{
		length++;
	}
	
    printf("%d", length);
    
    return 0;
}