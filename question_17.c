//17. Write a program which takes the length of the sides of a triangle as an input. Display\
whether the triangle is valid or not. 
//If sum of any two side is greater than third side then triangle is valid
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter three side of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(b+c>a||c+a>b||a+b>c)
       printf("Triangle is valid");
    else
       printf("Triangle is not valid");
    getch();
    return 0;
}