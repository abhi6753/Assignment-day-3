//11. Write a program to take marks of 5 subjects from the user. Assume marks are given \
out of 100 and passing marks is 33. Now display whether the candidate passed the \
examination or failed.
#include<stdio.h>
#include<conio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter number of sub1:\n");
    scanf("%f",&sub1);
    printf("Enter number of sub2:\n");
    scanf("%f",&sub2);
    printf("Enter number of sub3:\n");
    scanf("%f",&sub3);
    printf("Enter number of sub4:\n");
    scanf("%f",&sub4);
    printf("Enter number of sub5:\n");
    scanf("%f",&sub5);
    if((sub1>=33 && sub1<=100) && (sub2>=33 && sub2<=100) &&\
     (sub3>=33 && sub3<=100) && (sub4>=33 && sub4<=100) && (sub5>=33 && sub5<=100))
       printf("You're passed");
    else
       printf("You're failed");
    getch();
    return 0;
}