#include<stdio.h>
int main()
{
    int digit;
    printf("Hi customer, what do you like to order\n");
    printf("1.Pizza 2.Burger 3.Sandwich 4.Dosa 5.Masaladosa\n");
    int dosa=100,masala_dosa=150,sandwich=200,pizza=250,burger=300,sum=0;
    
    do{
        scanf("%d",&digit);
        printf("-----------------------------------------------------------\n");
        switch (digit)
        {
        case 1: printf("you have ordered PIZZA\n");
                printf("Do you want anything else\n");
                printf("If not press 6\n");
                sum+=pizza;
                break;
        case 2: printf("you have ordered BURGER\n");
                printf("Do you want anything else\n");
                printf("If not press 6\n");
                sum+=burger;
                break;
        case 3: printf("you have ordered SANDWICH\n");
                printf("Do you want anything else\n");
                printf("If not press 6\n");
                sum+=sandwich;
                break;
        case 4: printf("you have ordered DOSA\n");
                printf("Do you want anything else\n");
                printf("If not press 6\n");
                sum+=dosa;
                break;
        case 5: printf("you have ordered MASALADOSA\n");
                printf("Do you want anything else\n");
                printf("If not press 6\n");
                sum+=masala_dosa;
                break;
        default:
            //printf("please input a valid digit\n");
            break;
        }
        
    }
    while(digit<6);
    //printf("------------------------------------------------------------\n");
    printf("So the total amount is %d\n",sum);
    printf("Thankyou visit again\n");
    return 0;
}