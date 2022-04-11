#include<stdio.h>
void reverse(char s[])
{
    int i=0,j,p;
    char c[80];
    while(s[i]!='\0')
    {
        c[i]=s[i];
        i++;
    }
    p=i-1;
    i=0;
    for(j=p;j>=0;j--)
    {
        s[i]=c[j];
        i++;
    }
}
void main()
{
    char s[80];
    printf("Enter a string : ");
    gets(s);
    reverse(s);
    printf("Modified string : %s",s);
}