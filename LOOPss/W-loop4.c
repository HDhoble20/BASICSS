#include<stdio.h>
int main(){
    int x=1,n;
    printf("Enter the value of N:-");
    scanf("%d",&n);
    while (x<=n)
    {
        printf("%d\n",x);
        x=x+1;
    }
    return 0;

}
