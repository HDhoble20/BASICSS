#include<stdio.h>
void linkstring (char arr1[] , char arr2[],char arr3[])
{   
     int i,j=0;
   for ( i = 0; arr1[i]!='\0'; i++)
   {
     arr3[j]=arr1[i];
     j++;
   }
   for (i = 0; arr2[i]!='\0'; i++)
   {
    arr3[j]=arr2[i];
    j++;
   }
   printf("\n concatenated string: %s",arr3);
   
}

int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];
    printf("Enter the first string: ");
    gets(arr1);
    printf("Enter the second string: ");
    gets(arr2);
    linkstring(arr1,arr2,arr3);
}