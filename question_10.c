//10. Write a program which takes the cost price and selling price of a product from the user.\
      Now calculate and print profit or loss percentage.
#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,profit_percent,loss_percent;
    printf("Enter cost price and selling price:\n");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
       profit_percent = (sp-cp)*100/cp;
       printf("Profit = %.2f%%",profit_percent);
    }    
    else
    {
       loss_percent = (cp-sp)*100/cp;
       printf("Loss = %.2f%%",loss_percent);
    }
      
    getch();
    return 0;
}