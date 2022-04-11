#include<stdio.h>
float power(int n,float x)
{
    int i,a;
    float f=1.0;
    if(n>=0)
    {
        a=n;
    }
    else
    {
        a=-1*n;
    }
    for(i=1;i<=a;i++)
    {
        f=f*x;
    }
    if(n>=0)
    {
        return f;
    }
    else
    {
        return (1/f);
    }
}
void main()
{
    int n;
    float a,x;
    printf("Enter x : ");
    scanf("%f",&x);
    printf("Enter n (integer) : ");
    scanf("%d",&n);
    a=power(n,x);
    printf("%f^%d = %f",x,n,a);
}