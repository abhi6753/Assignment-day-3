//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if(year%4)
      printf("%d is not leap year",year);
    else
      printf("%d is a leap year",year);
    getch();
    return 0;
}