#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[100];
	float pr;
}; 
union Student1{
	int rollno;
	char name[100];
	float pr;
};
int main(){
	//differance 1: For structure struct keyword is used
	//				For union  union keyword is used 
	struct Student s1;
	s1.rollno = 13;
	strcpy(s1.name,"Priyanka");
	s1.pr = 89;
	//differance 2: You can access multiple data of structure in single line
	//				You can access multiple data of union in differant line
	printf("Structure data : ");
	printf("\n%d is Rollno \n%s is Name \n%f is Pr",s1.rollno,s1.name,s1.pr);
	union Student1 u1;
	u1.rollno = 13;
	printf("\n\nUnion data : ");
	printf("\n%d is Roll no",u1.rollno);
	strcpy(u1.name,"Priyanka");
	printf("\n%s is Name",u1.name);
	//diffrance 3: For union you can't update same data 
	//			   For stucture you can update same data 
	u1.pr = 90;
	printf("\n%f is Pr",u1.pr);
	//differance 4:Declare the size of union
	//			   Declare the size of structure
	printf("\n\nStucture Size: %d",sizeof(s1));
	printf("\nUnion Size: %d",sizeof(u1));
	return 0;
}