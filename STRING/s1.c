#include<stdio.h>
int length(char arr[])
{      int count=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
       count++; 
    }
    return count;
    
}
int main()
{
    char arr[100];
    printf("Enter name \n");
    gets(arr);
     
    puts(arr);
    int len=length(arr);
    printf("Length is %d \n",len);
    return 0;
}