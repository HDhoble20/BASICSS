#include<stdio.h>
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    (n % 2 ==0) ? printf("Number is even") : printf("Number is odd");
}