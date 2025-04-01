#include<stdio.h>
void revString(int A[],int n)
{
    printf("**********************************\n");
    printf("ORIGINAL ARRAY IS:--");
    for (int i = 0; i < n; i++)
 {
    printf("%d",A[i]);
 }
 int i,j=0;
 printf("\nREVERSE ARRAY IS:--");
 for ( i = n-1; i>=0; i--)
 {
   printf("%d",A[i]);

 }
}
main()
{
    int A[100];
    int n;
    
    printf("Enter the size of the string\n");
    scanf("%d",&n);
    printf("********************************\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    
    revString(A,n);
    
    
}