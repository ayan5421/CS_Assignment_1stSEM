#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],i,j,n;
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
            b[j][i]=a[i][j];
        }
    }
    printf("The transpose of the given matrix :\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}