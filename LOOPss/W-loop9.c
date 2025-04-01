#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the value of i:\n");
    scanf("%d",&i);
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n\n",i);
        sum=sum+i;
        i++;
    }
    printf("sum = %d\n",sum);
    return 0;

}
 