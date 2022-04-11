#include<stdio.h>
int high(int a[][20],int m,int n)
{
    int i,j,h;
    h=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>h)
            {
                h=a[i][j];
            }
        }
    }
    return h;
}
void main()
{
    int a[20][20],i,j,h,m,n;
    printf("Enter the number of rows and column respectively :\n");
    scanf("%d%d",&m,&n);
    printf("Enter the items :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Entry (%d,%d) : ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    h=high(a,m,n);
    printf("Highest number = %d",h);
}