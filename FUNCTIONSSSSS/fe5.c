#include<stdio.h>
int factorialOfN(int x)
{    
    int res=1;
  for (int i = 1; i <= x; i++)
  {
    res=res*i;
  }
  
    return res;
    
}
main()
{
    int a;
    printf("Enter the numbr:");
    scanf("%d",&a);
    int Answer=factorialOfN(a);
    printf(" answeR IS %d\n",Answer);
}