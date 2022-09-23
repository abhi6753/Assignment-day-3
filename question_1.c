//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num>0)
      printf("%d is Positive number.",num);
    else
      printf("%d is Non-positive number.",num);
    getch();
    return 0;
}