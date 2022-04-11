#include<stdio.h>
int gcd(int a,int b)
{
    int c,i,x;
    if(a<=b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    for(i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
            x=i;
        }
    }
    return x;
}
void main()
{
    int a,b,c;
    printf("Enter 2 positive integers : ");
    scanf("%d%d",&a,&b);
    c=gcd(a,b);
    printf("G.C.D. = %d",c);
}