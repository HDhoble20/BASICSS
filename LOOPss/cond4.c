#include<stdio.h>
int main(){
    int c;
    printf("enter the character\n");
    scanf("%d",&c);

    ((c>='a' && c>='z') ||(c>='A' && c<='Z')) ? printf("Character is alphabet") : printf("characxter is not alphabet");
}