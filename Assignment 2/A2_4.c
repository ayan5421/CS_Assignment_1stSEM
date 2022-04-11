#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The prime numbers between 1 and %d is(are) :\n",n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d\n",i);
        }
    }
}