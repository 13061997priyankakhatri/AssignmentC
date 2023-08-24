#include<stdio.h>
#include<string.h>

struct employee{
    char name[100] ;
    char address[100];
    int age;
    int phonenumber;
};

int main(){
    struct employee emp[100];
	int n;
	printf("How many employees details yow want to enter? ");
	scanf("%d", &n);
	for(int p=0;p<n;p++)
	{
		printf("\nEnter details for Employee %d : ", p+1);
		printf("\nEnter employee Name : ");
		scanf("%s", &emp[p].name);
		printf("Enter employee Address : ");
		scanf("%s", &emp[p].address);
		printf("Enter employee Age : ");
		scanf("%d", &emp[p].age);
        printf("Enter employee Phone Number : ");
		scanf("%d", &emp[p].phonenumber);
	}
	printf("\n ------Details of Employees-------");
	for(int p=0;p<n;p++)
	{
		printf("\n\nDetails of Employee %d : ",p+1);
		printf("\nEmployee Name is %s \nEmployee Address is %s  \nEmployee Age is %d \nEmployee Phone number is %d",emp[p].name,emp[p].address,emp[p].age,emp[p].phonenumber);
	}
    return 0;
}
