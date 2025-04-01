#include<stdio.h>
int cubeOfN(int x)
{
    int mul=x*x*x;
    return mul;
}
main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int cube=cubeOfN(a);
    printf("cube of a number is %d",cube);
}