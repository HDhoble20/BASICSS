#include<stdio.h>
void printArrayString(char *p)
{
    printf("**********STRING**********\n");
for (int i = 0; p[i]!='\0'; i++)
{

}
 printf("%s\n",p);
}

 main()
{
    char A[100];
    printf("Enter the name\n");
    gets(A);
    
    printArrayString(A);
}