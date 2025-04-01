#include<stdio.h>
int main()
{
    int n,revN,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = n; n>0; i++)
    {
        rem=n%10;
        revN=revN*10+rem;
        n=n/10;
    }
    printf("rev no = %d",revN);
    
}