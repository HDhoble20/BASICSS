#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp=NULL;
    fp=fopen("/home/himanshu/Desktop/Tutorial/Class/cond3.c","r");
    ch=fgetc(fp);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
    
}