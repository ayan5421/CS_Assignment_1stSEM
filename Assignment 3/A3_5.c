#include<stdio.h>
void main()
{
    int a[50],i,j,k,c,n,p,h=0,e=0;
    printf("Enter the number of entries (less than 20) : ");
    scanf("%d",&n);
    do
    {
        if(e>0)
        {
            printf("Entered number was greater than %d......please re-enter\n",n);
        }
        printf("Enter any number less than equal to %d : ",n);
        scanf("%d",&k);
        e++;
    }while(k>n);
    printf("Enter the in the interval [0,%d] :\n",(k-1));
    for(i=0;i<n;i++)
    {
        e=0;
        do
        {
            if(e>0)
            {
                printf("Entered entry was not in the specified interval......please re-enter\n");
            }
            printf("Entry %d : ",(i+1));
            scanf("%d",&a[i]);
            e++;
        }while(a[i]<0||a[i]>=k);
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                c++;
            }
        }
        if(c>h)
        {
            h=c;
            p=i;
        }
    }
    printf("The maximum repeating number : %d",p);
}