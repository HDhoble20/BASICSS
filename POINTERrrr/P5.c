
//**************CALL BY VALUE***************
#include<stdio.h>
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
int main()
{
    int n1=11;
    int n2=22;
    printf("N1:%d   N2:%d\n",n1,n2);
    swap(n1,n2); //CALL BY VALUE.........
    printf("********AFTER SWAP*********\n");
    printf("N1:%d   N2:%d\n",n1,n2);
}