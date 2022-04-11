#include<stdio.h>
void main()
{
    int a[20],i,j,k,c,n,t=0;
    printf("Enter the number of entries (less than 20) : ");
    scanf("%d",&n);
    printf("Enter the entries :\n");
    for(i=0;i<n;i++)
    {
        printf("Entry %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c++;
                for(k=j;k<(n-1);k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
        }
        if(c>0)
        {
            t++;
        }
    }
    printf("The number of duplicate items : %d",t);
}