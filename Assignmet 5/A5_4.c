#include<stdio.h>
struct date
{
        int d,m,y;
};
struct employee
{
    char ec[10],en[30];
    int s,dn;
    struct date x;
};
void main()
{
    struct employee a[10];
    int i,c=0;
    printf("Enter the data of 10 employee :\n");
    for(i=0;i<10;i++)
    {
        printf("Employee %d :\nEnter Employee Code : ",(i+1));
        gets(a[i].ec);
        printf("Enter Employee Name : ");
        gets(a[i].en);
        printf("Enter Department Number : ");
        scanf("%d",&a[i].dn);
        printf("Enter salary : ");
        scanf("%d",&a[i].s);
        printf("Enter date of joining :\nDate : ");
        scanf("%d",&a[i].x.d);
        printf("Month : ");
        scanf("%d",&a[i].x.m);
        printf("Year : ");
        scanf("%d",&a[i].x.y);
    }
    printf("Employee Code\tEmployee Name\tDept. Number\tSalary\tDate of Joining\n");
    for(i=0;i<10;i++)
    {
        if(a[i].s>=10000)
        {
            c++;
            printf("%s\t%s\t%d\t%d\t%d/%d/%d\n",a[i].ec,a[i].en,a[i].dn,a[i].s,a[i].x.d,a[i].x.m,a[i].x.y);
        }
    }
    if(c==1)
    {
        printf("No data found");
    }
}
