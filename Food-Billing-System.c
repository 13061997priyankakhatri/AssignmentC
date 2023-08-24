#include <stdio.h>

int main()
{
    int i = 4, choice, price, tprice = 0,morder;
   
    for (int a = 0; a < i; a++)
    {
        printf("\n-------------------- Menu of the Program ----------------------");
		
        printf("\nEnter 1 for Pizza,\nEnter 2 for Burger,\nEnter 3 for Dosa,\nEnter 4 for Idli\n");

        printf("\n 1.Pizza\t\tPrice=180rs/pcs");
        printf("\n 2.Burger\t\tPrice=100rs/pcs");
        printf("\n 3.Dosa\t\t\tPrice=120rs/pcs");
        printf("\n 4.Idli\t\t\tPrice=50rs/pcs");

        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int qty;

            printf("You have selected pizza\n");

            printf("Enter the qty of pizza :\n");
            scanf("%d", &qty);

            price = qty * 180;
            printf("\n%d",price);

            tprice += price;
            printf("\n%d",tprice);   
        }

        if (choice == 2)
        {
            int qty;

            printf("You have selected burger\n");

            printf("Enter the qty of burger :\n");
            scanf("%d", &qty);

            price = qty * 100;
            printf("\n%d",price);

            tprice += price;
            printf("\n%d",tprice);
        }

        if (choice == 3)
        {
            int qty;

            printf("You have selected dosa\n");

            printf("Enter the qty of dosa :\n");
            scanf("%d", &qty);

            price = qty * 120;
            printf("\n%d",price);

            tprice += price;
            printf("\n%d",tprice);
        }

        if (choice == 4)
        {
            int qty;

            printf("You have selected idli\n");

            printf("Enter the qty of idli :\n");
            scanf("%d", &qty);

            price = qty * 50;
            printf("\n%d",price);

            tprice += price;
            printf("\n%d",tprice);
        }
        
        printf("\nDo you want to order more ? (If yes press 1 else press 0)\n");
        scanf("%d",&morder);
        
        if (morder == 1)
        {
            i++;
        }
        else
        {
            break;
        }
    }

    printf("Total bill amount is : %d ", tprice);

    return 0;
}