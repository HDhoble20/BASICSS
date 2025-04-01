#include<stdio.h>
void copyString(char *A,char *B)
{
 for (int i = 0; A[i]!='\0'; i++)
 {
    B[i]=A[i];
 }
  printf("Frst string = %s\n",A);
  printf("copied string = %s\n",B);
 
}
main()
{
    char A[100];
    char B[100];
    printf("Enter name\n");
    gets(A);
    copyString(A,B);
}
