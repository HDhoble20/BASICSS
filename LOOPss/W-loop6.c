#include<stdio.h>
int main(){
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    while (c<='z')
    {
        printf("%c",c);
        c=c+1;
    }
    return 0;
    
}