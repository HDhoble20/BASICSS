#include<stdio.h>
void copystring (char arr1[],char arr2[])
{     int i;
   for ( i = 0; arr1[i]!='\0'; i++)
   {
     arr2[i]=arr1[i];
   }
   printf("Frst string = %s\n",arr1);
   printf("copied string = %s\n",arr2);

}
int main()
{
    char arr1[100];
    char arr2[100];
    printf("Enter any string: ");
    gets(arr1);
    copystring(arr1,arr2);
}