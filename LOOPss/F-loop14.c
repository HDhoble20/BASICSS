#include<stdio.h>
int main()
{
    int n,revN,rem,i,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
      temp=n;
    for (i = n; n>=1; i++)
    {
        rem=n%10;
        revN=revN*10+rem;
        n=n/10;
    }
    
    if (temp==revN)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    
    
    
}