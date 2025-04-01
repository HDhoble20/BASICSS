#include<stdio.h>

void main()
{
    FILE *fp=NULL;
    
    fp=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","r");
    if (fp==NULL)
    {
        printf("FILE NOT PRINTED");
        
    }
    char c =fgetc(fp);
    while (c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
fclose(fp);
}