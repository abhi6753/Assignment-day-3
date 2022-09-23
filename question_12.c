//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter alphabet:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
      printf("'%c' is in uppercase",ch);
    if(ch>='a'&&ch<='z')
      printf("'%c' is inlowercase",ch);
    getch();
    return 0;
}