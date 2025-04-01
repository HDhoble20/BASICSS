#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    char c;
    fp1=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","r");
    if (fp1==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    fp2=fopen("/home/himanshu/Desktop/FILES/read.txt","r");
    if (fp2==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    fp3=fopen("/home/himanshu/Desktop/FILES/merge.txt","w");

    c=fgetc(fp1);
    while (c!=EOF)
    {
        fputc(c,fp3);
        c=fgetc(fp1);
    }
    c=fgetc(fp2);
    while (c!=EOF)
    {
        fputc(c,fp3);
        c=fgetc(fp2);
    }
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 return 0;   
    
    
}