#include<stdio.h>
int main()
{
    double n=559999987;
    double *p=&n;
    printf("N: %.lf \n",n);
    printf("N address: %d  \n",&n);
    printf("PTR inside: %d \n",p);
    printf("P address: %d \n",&p);
    printf("*P: %.lf \n",*p);
}