#include<stdio.h>
#include<stdlib.h>
char * valueOf(int i)
{
    printf("%d\n",i);
    char * p=(char *)malloc(2*sizeof(char));
    p[0]=i-'0';
    p[1]='\0';
    return p;
}
int main()
{

} 