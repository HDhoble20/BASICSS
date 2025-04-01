#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fopen("/home/himanshu/Desktop/FILES/Himanshu.txt","w");
    if (fp==NULL)
    {
        printf("FILE NOT CREATED...\n");
        exit(1);  
    } 
    fclose(fp);
    return 0;
}
