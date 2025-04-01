#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","r");
    if (fp1==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    fp2=fopen("/home/himanshu/Desktop/FILES/read.txt","w");
    if (fp2==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    c=fgetc(fp1);
    while (c!=EOF)
    {
        fputc(c,fp2);
        c=fgetc(fp1);
    }

 fclose(fp1);
 fclose(fp2);
 return 0;   
    
    
}