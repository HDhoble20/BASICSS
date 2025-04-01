#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","w");
    fprintf(fp,"HELLO TEXTED WITH FPRINTF...\n");
    fclose(fp);
}