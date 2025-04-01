#include<stdio.h>
void palindrome(int x, int y)
{
    int rem;
   while (x>0)
   {
     rem=x%10;
     y=y*10+rem;
     x=x/10;
   }
  
   if (x==y)
   {
    printf("Number is palindrome...");

   }
   else
   {
    printf("not palindrome");
   }
   return 0;
}
main()
{
    int a,b=0;
    printf("Enter the number :");
    scanf("%d",&a);
    palindrome(a,b);
}