#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],i,j,n;
    printf("Enter the order of the matrix : ");
    scanf("%d",&n);
    printf("Enter the 1st matrix row wise :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter item (%d,%d) : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the 2nd matrix row wise :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter item (%d,%d) : ",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The addition of the given 2 matrices :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}