//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<conio.h>
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    if(num%2 && num%3)
       printf("%d is not divisible by 2 and 3",num);
    else
       printf("%d is divisible by 2 and 3",num);
    getch();
    return 0;
}