#include<stdio.h>
void digitFL (int x, int y)
{
    int lastD,firstD;
    lastD=x%10;
   
  while(x>=10)
  {
    x=x/10;
  }
  firstD=x;
  
    
  
  printf("first and last digit of number is %d , %d",x,lastD);
}
main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    digitFL(a,b);
}

