#include<stdio.h>
void reverseString(char *A,char *B)
{
    int count=0;
for (int j = 0; *(A+j)!='\0'; j++)
{
    count++;
}

 int i, j,temp;
  j=0;
for ( i=count-1; i>=0; i--)
  {
    *(B+j)=*(A+i); 
    j++;      
  }
   
  *(B+j)='\0';
   
  

}
int main()
{
    
    char A[100];
    char B[100];
    printf("Enter the string:");
    gets(A);
    reverseString(A,B);

    printf(" \n REVESRE:--%s ",B);
    return 0;
}