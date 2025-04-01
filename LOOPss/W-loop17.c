#include<stdio.h>
int main(){
    int n,i,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        i=n%10;
        product=product*i;
        n=n/10;
    }
    printf("Product of the number is: %d",product);
    return 0;
}