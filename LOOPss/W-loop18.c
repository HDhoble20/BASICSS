#include<stdio.h>
int main(){
    int n,revN=0,rem;
    printf("Enter the number:--");
    scanf("%d",&n);

    while (n!=0)
    {
        rem=n%10;
        revN=revN*10+rem;
        n=n/10;
        
    }
    printf("reverse numbeer is:- %d",revN);
    
}