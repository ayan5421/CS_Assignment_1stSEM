#include<stdio.h>
int main()
{
    float a[20],h,s;
    int i,n;
    printf("Enter the number of elements in the set (less than 20) : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d : ",(i+1));
        scanf("%f",&a[i]);
    }
    h=a[0];
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];
        }
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("%f is the maximum among the elements\n%f is the minimum among the elements",h,s);
}