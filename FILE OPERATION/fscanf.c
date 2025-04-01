#include<stdio.h>
int main()
{
    FILE *fp;
    char A[255];//create char array to stoire data of file
    fp=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","r");
    while(fscanf(fp,"%s",A)!=EOF)
    {
        printf("%s",A);
    }
    fclose(fp);
}