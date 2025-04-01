#include<stdio.h>
int main(){
    int n;
    printf("Enter the first number...\n");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 0 :
         printf("Number is odd..");
        break;
    case 1 :     
         printf("Number is even..");
    default:
        break;
    }
    
}