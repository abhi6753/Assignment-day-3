//16. Write a program to check whether a given character is an alphabet (uppercase), an\
alphabet (lower case), a digit or a special character.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
       printf("Upper case");
    else if(ch>='a'&&ch<'z')
       printf("lower case");
    else if(ch>='0'&&ch<='9')
       printf("digit");
    else
       printf("Symbol");
    getch();
    return 0;
}
