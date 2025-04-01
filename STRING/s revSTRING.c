#include<stdio.h>
void revString(char A[], char B[])
{
 int  count=0;
 for (int j = 0; A[j]!='\0'; j++)
 {
    count++;
 }
 int i,j=0;
 for ( i = count-1; i>=0; i--)
 {
    B[j]=A[i];
    j++;
 }
 B[j]='\0';

 
}
main()
{
    char A[100];
    char B[100];
    printf("Enter the string to reverse\n");
    gets(A);
    revString(A,B);
     printf("Rev string %s\n",B);
}