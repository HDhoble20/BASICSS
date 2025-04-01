#include<stdio.h>
void  copyArray (int x[], int y[])
{
    int n=5;
     printf("original array is:\n");
 for (int i = 0; i < n; i++)
 {
    printf("%d\n",x[i]);
 }
 printf("Copied array is:\n");
 for (int i = 0; i < n; i++)
 {
    printf("%d\n",y[i]);
 }
 
}
 main()
{
 int a[5]={1,2,3,4,5},n=5;
 int b[n],i;
 for (int i = 0; i < n; i++)
 {
    b[i]=a[i];
 }
 copyArray(a,b);
}