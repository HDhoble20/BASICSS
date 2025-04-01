#include<stdio.h>
int main()
{
    float n=55.5;
    float *p=&n;
    printf("N: %.1f \n",n);
    printf("N address: %d  \n",&n);
    printf("PTR inside: %d \n",p);
    printf("P address: %d \n",&p);
    printf("*P: %.1f \n",*p);
}