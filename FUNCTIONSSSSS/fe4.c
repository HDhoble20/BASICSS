#include<stdio.h>
int powerOfN(int x,int y)
{    
    int res=1;
    while (y!=0)
    {
         res=res*x;
         --y;

    }
    return res;
    
}
main()
{
    int base,power;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("enter the power:");
    scanf("%d",&power);
    int Answer=powerOfN(base,power);
    printf(" answeR IS %d\n",Answer);
}