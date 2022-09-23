//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num>0)
      printf("possitive number");
    if(num==0)
      printf("zero");
    if(num<0)
      printf("Negative number");
    getch();
    return 0;
}