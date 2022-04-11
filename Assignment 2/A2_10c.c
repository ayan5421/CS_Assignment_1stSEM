#include<stdio.h>
void main()
{
    int n,i,j,k,c=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            printf("\t");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%d\t",c);
            c++;
        }
        printf("\n");
    }
}