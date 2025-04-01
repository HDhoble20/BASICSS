#include<stdio.h>/home/himanshu/Desktop/FILES/
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("read.txt","w");
    if (fp==NULL)
    {
    printf("FILE NOT Created");
    exit(1);
    }
    int x=1;
    for (int i = 65; i<=90 ; i++)
    {
    fputc((char)i,fp);
      if (x%7==0)
        fputc('\n',fp);
      x++;
      
    }
    fclose(fp);
    
}