#include<stdio.h>
int reverseInteger(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
void main()
{
    int a,r;
    printf("Enter a number : ");
    scanf("%d",&a);
    r=reverseInteger(a);
    printf("Reverse of %d is %d",a,r);
}