//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,count=0;
    printf("Enter three-digit number:\n");
    scanf("%d",&num);
    temp = num;
    while(temp)
    {
       count++;
       temp/=10;
    }
    if(temp==3)
      printf("Yes, it is three-digit number");
    else
      printf("No, it is not three-digit number");
    getch();
    return 0;
}