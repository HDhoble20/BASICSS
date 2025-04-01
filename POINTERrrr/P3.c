#include<stdio.h>
int main()
{
    char a='c';
    char *p=&a;
    printf("N: %c \n",a);
    printf("N address: %d  \n",&a);
    printf("PTR inside: %d \n",a);
    printf("P address: %d \n",&a);
    printf("*P: %c \n",*p);
}