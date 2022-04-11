#include<stdio.h>
void main()
{
    int a[20][20],i,j,n,c=0,t=0,p=0,s=0,x=0;
    printf("Enter the order of the matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix row wise :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter item (%d,%d) : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
            {
                c++;
            }
            if(i<j&&a[i][j]==0)
            {
                t++;
            }
            if(i!=j&&a[i][j]==0)
            {
                p++;
            }
        }
        s=s+a[i][i]+a[i][(n-1)-i];
    }
    if(c=(n*n))
    {
        printf("This is a SYMETRIC matrix");
    }
    if(p==(n*(n-1)))
    {
        x++;
        printf("This is a DIAGONAL matrix");
    }
    if(t==((n*(n-1))/2)&&x==0)
    {
        printf("This is a LOWER TRINANGULAR matrix");
    }
    printf("\nSum of both the diagonals : %d",s);
}