//**************CALL BY ADDRESS***************
#include<stdio.h>
//*x=value of n1,*y=value of n2, x=&n1,y=&n2
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int n1=11;
    int n2=22;
    printf("********BEFORE SWAP*********\n");
    printf("N1:%d   N2:%d\n",n1,n2);
    swap(&n1,&n2);    //CALL BY ADDRESS.....
    printf("********AFTER SWAP*********\n");
    printf("N1:%d   N2:%d\n",n1,n2);
}