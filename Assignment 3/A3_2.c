#include<stdio.h>
int main()
{
    int a[20],b[20],n,i;
    printf("Enter the number of elements in the set (less than 20) : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The data items after copying to new array : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}