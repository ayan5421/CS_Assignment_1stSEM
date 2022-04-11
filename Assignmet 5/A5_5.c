#include<stdio.h>
void main(int argc, char const *argv[])
{
    char c;
    FILE *a1,*a2;
    a1=fopen(argv[1],"r");
    a2=fopen(argv[2],"w");
    if(a1==NULL)
    {
        printf("Could not open file");
    }
    else
    {
        while((c=getc(a1))!=EOF)
        {
        putc(c,a2);
        }
        printf("File copy successful");
    }
    fclose(a1);
    fclose(a2);
}
