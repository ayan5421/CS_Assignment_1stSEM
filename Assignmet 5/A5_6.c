#include<stdio.h>
void main(int argc, char const *argv[])
{
    char c1,c2;
    FILE *a1,*a2;
    a1=fopen(argv[1],"r");
    a2=fopen(argv[2],"r");
    if(a1==NULL||a2==NULL)
    {
        printf("Could not open file");
    }
    else
    {
        while(1)
        {
            c1=getc(a1);
            c2=getc(a2);
            if(c1!=c2)
            {
                printf("%d",0);
                break;
            }
            else if(c1==EOF&&c2==EOF)
            {
                printf("%d",1);
                break;
            }
        }
    }
    fclose(a1);
    fclose(a2);
}