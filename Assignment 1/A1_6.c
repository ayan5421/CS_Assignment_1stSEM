#include<stdio.h>
void main()
{
    float x,a;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    if(x>50)
    {
        a=3*x+1;
    }
    else if(x>=30&&x<=50)
    {
        a=2*x*x+3;
    }
    else if(x>=1&&x<=29)
    {
        a=5*x*x*x-6;
    }
    else
    {
        a=0.0;
    }
    printf("f(%f) = %f",x,a);
}