//6. Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
      printf("%d",a);
    else if(a==b)
      printf("%d",a);
    else
      printf("%d",b);
    getch();
    return 0;
}