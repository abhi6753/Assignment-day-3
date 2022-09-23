//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    if(num%7==0||num%3==0)
    {
        if(!(num%7))
          printf("%d is divisible by 7\n",num);
        if(!(num%3))
          printf("%d is divisible by 3",num);      
    }
    else
       printf("%d is not divisible by 7 or 3",num);
    getch();
    return 0;
}