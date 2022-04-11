#include<stdio.h>
void main()
{
    float x,y,a1,a2;
    printf("Enter the values of x and y respectively : ");
    scanf("%f%f",&x,&y);
    a1=4*x*x+2*x+10;
    a2=5*x*x*x+4*x*x*y*y+4*y*y*y+30;
    printf("4x^2+2x+10 = %f \n5x^3+4x^2y^2+4y^3+30 = %f",a1,a2);
}