#include<stdio.h>
void comparestring (char arr1[], char arr2[])
{   int i,flag=0;
  for (i=0; arr1[i]!='\0';i++)
  {
    if (arr1[i]!=arr2[i])
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
    char arr1[100];
    char arr2[100];
    printf("Enter the first string: ");
    gets(arr1);
    printf("Enter the second string: ");
    gets(arr2);
    comparestring(arr1,arr2);

}