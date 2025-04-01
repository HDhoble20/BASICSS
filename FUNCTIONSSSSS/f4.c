#include<stdio.h>
void digitFL (int x, int y)
{
    int lastD,firstD,sum=0;
    lastD=x%10;
  while (x>=10)
  {
    x=x/10;
  }
  firstD=x;
  sum=firstD+lastD;
  printf("sum of the digit is: %d",sum);
}
main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    digitFL(a,b);
}
