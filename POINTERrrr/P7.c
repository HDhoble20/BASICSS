#include<stdio.h>
void printArray(int *p)
{
for (int i = 0; i < 5; i++)
{
    printf("%d",*(p+i));//p[i]
}

}

 main()
{
    int A[5]={11,22,33,44,55};
    printArray(A);
}