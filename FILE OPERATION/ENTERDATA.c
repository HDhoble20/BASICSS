#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","w");
    char c[100];
    int n;
    printf("ENTER THE NO OF NAME YOU WANT TO PRINT\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("ENTER NAMES \n");
        scanf(" ");
        gets(c);
        fprintf(fp,"%s\n",c);
    }
    fclose(fp);
    
}