//4. Write a program to check whether a given number is an even number or an odd \
number without using % operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    if(num&1) //If last bit is 1 then the number is odd, otherwise always even. 
     printf("%d is odd",num);
    else
     printf("%d is even",num);
    getch();
    return 0;
}