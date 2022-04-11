#include<stdio.h>
void main()
{
    int x,n,i,j,k,f,p;
    float s=0.0;
    printf("Enter the value of x and n respectively : ");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        f=1;
        p=1;
        for(j=0;j<i;j++)
        {
            f=f*x;
        }
        for(k=1;k<=i;k++)
        {
            p=p*k;
        }
        s=s+(((float)f)/((float)p));
    }
    printf("S = %f",s);
}