#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number:-");
    scanf("%d",&n);
    for (int i = n; n>0; i++)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    
}