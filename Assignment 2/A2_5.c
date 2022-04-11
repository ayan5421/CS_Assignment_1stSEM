#include<stdio.h>
void main()
{
    int x,y,i,f=1;
    printf("Enter the value of x and y respectively : ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        f=f*x;
    }
    printf("The value of %d^%d = %d",x,y,f);
}