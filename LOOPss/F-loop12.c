#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = n; i >= 0; i++)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    
}