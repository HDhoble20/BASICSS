#include<stdio.h>
void compareString(char *A,char *B)
{
  int i,flag=0;
  for (i=0; A[i]!='\0';i++)
  {
    if (A[i]!=B[i])
    {
        flag=1;
        break;
    }
    
  }
  if (flag==0)
  {
    printf("String are equal");
  }
  else
  {
    printf("string are not equal");
  }
  
}
main()
{
    char A[100];
    char B[100];
    printf("Enter first string :--");
    gets(A);
    printf("Enter Second string :--");
    gets(B);
    compareString(A,B);
}