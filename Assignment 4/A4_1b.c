#include<stdio.h>
void swap(float *p,float *q)
{
    float t;
    t=*p;
    *p=*q;
    *q=t;
}
void main()
{
    float a,b;
    printf("Enter 2 numbers :\na : ");
    scanf("%f",&a);
    printf("b : ");
    scanf("%f",&b);
    swap(&a,&b);
    printf("After swapping :\na : %f\nb : %f",a,b);
}