#include<stdio.h>
void sumD(int x, int y)
{
  while (x>0)
  {
    x=x/10;
    y++;
  }
  
     printf("count of the number is:-%d",y);   

}
main()
{
    int a,b=0;
    printf("Enter the number:");
    scanf("%d",&a);
    sumD(a,b);
}
