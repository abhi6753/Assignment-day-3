//7. Write a program to check whether roots of a given quadratic equation are real & \
distinct, real & equal or imaginary roots
#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter value of a , b and c of quadratic quation:\n");
    scanf("%d%d%d",&a,&b,&c);
    d= b*b-4*a*c;
    if(d>0)
      printf("real & distinct roots");
    else if(d==0)
      printf("real & equal roots");
    else
      printf("imaginary roots");
    getch();
    return 0;
}