#include<stdio.h>
void mergeArray(char *A,char *B,char *C)
{
      int i,j=0;
   for ( i = 0; A[i]!='\0'; i++)
   {
     C[j]=A[i];
     j++;
   }
   for (i = 0; B[i]!='\0'; i++)
   {
    C[j]=B[i];
    j++;
   }
   printf("\n concatenated string: %s",C);
   
}
main()
{
    char A[100];
    char B[100];
    char C[100];
    printf("Enter first string :--");
    gets(A);
    printf("Enter Second string :--");
    gets(B);
    mergeArray(A,B,C);
}