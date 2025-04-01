#include<stdio.h>
int main()
{
    int n,firstD,lastD;
    printf("Enter the number:-");
    scanf("%d",&n);
    lastD=n%10;
    for (int i = n; i>=10; i++)
    {
      n=n/10;
    }
    firstD=n;
    printf("First digit = %d\n Last digit= %d",firstD,lastD);
}