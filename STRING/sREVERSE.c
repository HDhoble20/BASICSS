#include<stdio.h>
int main()
{
    char A[20];
    printf("Enter the string");
    gets(A);

    printf("%s",strrev(A));
}