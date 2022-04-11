#include<stdio.h>
void main()
{
    int n,x,i,j,s=0,f;
    printf("Enter the values of n and x respectively : ");
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        {
            f=f*x;
        }
        s=s+f;
    }
    printf("S = %d",s);
}