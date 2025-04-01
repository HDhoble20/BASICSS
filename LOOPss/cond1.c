#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter N1 \n");
    scanf("%d",&n1);
    printf("enter N2\n");
    scanf("%d",&n2);
    printf("enter N3\n");
    scanf("%d",&n3);

    (n1>n2 && n1>n3) ? printf("N1 is greater") : (n2>n3) ? printf("N2 is greater") : printf("N3 is greater");
}