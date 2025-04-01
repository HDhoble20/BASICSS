#include<stdio.h>
int main(){
       int n;
       int count=0;
       printf("Enter the number:-");
       scanf("%d",&n);

       while (n>0)
       {
         count=count+1;
         n=n/10;
       }
       printf("count of the number is:-%d",count);
       return 0;
       
}