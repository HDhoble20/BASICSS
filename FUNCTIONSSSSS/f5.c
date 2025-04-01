#include<stdio.h>
void revNo (int x, int y)
  
{
    int rem;
while (x!=0)
{
  rem=x%10;
  y=y*10+rem;
  x=x/10;

}

     printf("reverse numbeer is:- %d",y);
 
}
main ()
{
  int a,b=0;
  printf("Enter the number:");
  scanf("%d",&a);
  revNo (a,b);
}