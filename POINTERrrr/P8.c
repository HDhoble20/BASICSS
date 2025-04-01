#include<stdio.h>
void printArrayChar(char *p)
{
for (int i = 0; i < 5; i++)
{
    printf("%c",*(p+i));
}

}

 main()
{
    char A[5]={'a','b','c','d','e'};
    printArrayChar(A);
}