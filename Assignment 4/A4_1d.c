#include<stdio.h>
int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
void main()
{
    int a[20],i,n,p;
    printf("Enter the number of items : ");
    scanf("%d",&n);
    printf("Enter the numbers :\n");
    for(i=0;i<n;i++)
    {
        printf("Entry %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    p=sum(a,n);
    printf("Sum of the items = %d",p);
}