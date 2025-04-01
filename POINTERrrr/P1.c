#include<stdio.h>
int main()
{
    int n=55;
    int *p=&n;
    printf("N: %d \n",n);
    printf("N address: %d  \n",&n);
    printf("PTR inside: %d \n",p);
    printf("P address: %d \n",&p);
    printf("*P: %d \n",*p);
}