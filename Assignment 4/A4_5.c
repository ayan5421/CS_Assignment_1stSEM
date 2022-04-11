#include<stdio.h>
int hr[20],hc[20];
void high(int a[][20],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        hr[i]=a[i][0];
        for(j=0;j<n;j++)
        {
            if(a[i][j]>hr[i])
            {
                hr[i]=a[i][j];
            }
        }
    }
    for(j=0;j<n;j++)
    {
        hc[j]=a[0][j];
        for(i=0;i<m;i++)
        {
            if(a[i][j]>hc[j])
            {
                hc[j]=a[i][j];
            }
        }
    }
}
void main()
{
    int a[20][20],i,j,m,n;
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
    high(a,m,n);
    printf("Highest number row wise : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",hr[i]);
    }
    printf("\nHighest number column wise : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",hc[i]);
    }
}