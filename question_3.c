//3. Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    num%2?printf("Odd number"):printf("Even number");
    getch();
    return 0;
}
