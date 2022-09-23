//18. Write a program which takes the month number as an input and display number of \
days in that month
#include<stdio.h>
#include<conio.h>
int main()
{
    short num;
    printf("Enter number of month to display its month name:\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("june");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default:printf("Error");
    }
    getch();
    return 0;
}