#include<stdio.h>
int main(){
    int x=1,n;
    printf("Enter the value of N:-");
    scanf("%d",&n);
    while (x<=n)
    {
        printf("%d\n",n);
        n=n-1;
    }
    return 0;

}
