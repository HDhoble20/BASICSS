#include<stdio.h>
int main(){
    int n;
    printf("Enter number till you want:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
        
    }
    return 0;
}