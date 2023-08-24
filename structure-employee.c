#include <stdio.h>

/*structure declaration*/
struct employee
{
    char emp_name[30], emp_address[30];
    int emp_age, emp_number;
};

int main()
{
    struct employee s1 = {"Priyanka", "Bhuj" , 29 ,1345678902};
    printf("\n\nEmployee name : %s   \nEmployee address : %s   \nEmployee age : %d  \nEmployee number : %d", s1.emp_name, s1.emp_address, s1.emp_age, s1.emp_number);
    return 0;
}