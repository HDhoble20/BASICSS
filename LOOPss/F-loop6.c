#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    
}