#include<stdio.h>
int subs(char s1[],char s2[])
{
    int i=0,j=0,l1,l2,k,c;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        j++;
    }
    l1=i;
    l2=j;
    if(l2>l1)
    {
        return 0;
    }
    else
    {
        i=0;
        while(s1[i]!='\0')
        {
            c=0;
            if(s1[i]==s2[0]&&(l1-i)>=l2)
            {
                k=i;
                j=0;
                while(s2[j]!='\0')
                {
                    if(s1[k]==s2[j])
                    {
                        c++;
                    }
                    j++;
                    k++;
                }
                if(c==l2)
                {
                    return 1;
                }
            }
            i++;
        }
        return 0;
    }
}
void main()
{
    char s1[80],s2[80];
    int a;
    printf("Enter 1st string : ");
    gets(s1);
    printf("Enter 2nd string : ");
    gets(s2);
    a=subs(s1,s2);
    if(a==1)
    {
        printf("2nd string is A SUBSTRING of the 1st");
    }
    else if(a==0)
    {
        printf("2nd string is NOT A SUBSTRING of the 1st");
    }
}