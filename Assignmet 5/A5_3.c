#include<stdio.h>
struct complex
{
    int a,b;
};
void main()
{
    struct complex a[2],x,y,z;
    int i,j,p=0,k,m,n;
    char s[2][10],c,d[]={'0','1','2','3','4','5','6','7','8','9'};
    printf("Enter 2 complex numbers of the form (a+bi) (a and b should be integer) :\n1st complex number : ");
    gets(s[0]);
    printf("2nd complex number : ");
    gets(s[1]);
    for(i=0;i<2;i++)
    {
        j=0;
        n=0;
        m=0;
        while(s[i][j]!=0)
        {
            c=s[i][j];
            if(c=='-'&&j==0)
            {
                n=1;
            }
            else if(c=='+'||c=='-')
            {
                if(c=='-')
                {
                    m=1;
                }
                if(n==1)
                {
                    a[i].a=(-1)*p;
                }
                else
                {
                    a[i].a=p;
                }
                p=0;
            }
            else if (c=='i')
            {
                if(m==1)
                {
                    a[i].b=(-1)*p;
                }
                else
                {
                    a[i].b=p;
                }
                p=0;
            }
            else
            {
                for(k=0;k<10;k++)
                {
                    if(c==d[k])
                    {
                        p=p*10+k;
                        break;
                    }
                }
            }
            j++;
        }
    }
    x.a=a[0].a+a[1].a;
    x.b=a[0].b+a[1].b;
    y.a=a[0].a-a[1].a;
    y.b=a[0].b-a[1].b;
    z.a=(a[0].a*a[1].a)-(a[0].b*a[1].b);
    z.b=(a[0].a*a[1].b)+(a[0].b*a[1].a);
    printf("Addition of 2 complex numbers = %d + (%d)i\n",x.a,x.b);
    printf("Substraction of 2nd complex number from 1st = %d + (%d)i\n",y.a,y.b);
    printf("Multiplication of 2 complex numbers = %d + (%d)i",z.a,z.b);
}