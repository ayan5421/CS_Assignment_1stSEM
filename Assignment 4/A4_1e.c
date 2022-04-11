#include<stdio.h>
void space(char c[])
{
    int i=0,j;
    while(c[i]!='\0')
    {
        if(c[i]==' ')
        {
            j=i;
            while(c[j]!='\0')
            {
                c[j]=c[j+1];
                j++;
            }
        }
        i++;
    }
}
void main()
{
    char a[80];
    printf("Enter a string : ");
    gets(a);
    space(a);
    printf("Modified string : %s",a);
}