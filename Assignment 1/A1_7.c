#include<stdio.h>
void main()
{
    char c,d;
    int a;
    printf("Enter the character : ");
    scanf("%c",&c);
    a=((int)c)+1;
    d=(char)a;
    printf("%c is the next character an its ASCII code is %d",d,a);
}