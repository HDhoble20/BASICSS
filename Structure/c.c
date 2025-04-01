#include<stdio.h>
int main()
{
    int n,i,d=1,sum=0;
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        printf("%d\n",d);
        sum=sum+d;
        d=(d*10)+1;
   
    }
    printf("%d\n",sum);
}