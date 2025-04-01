#include<stdio.h>
void countVC (char arr[])              //count vowels and consonant
{
  int i;
  int vowel=0,consonant=0;
  for ( i = 0; arr[i]; i++)
  {
    if((arr[i]>='a'&& arr[i]<='z')||(arr[i]>='A'&& arr[i]<='Z'))
    {
      if (arr[i]=='a'|| arr[i]=='e'||arr[i]=='i'||arr[i]=='o'|| arr[i]=='u')
      {
          vowel++;
      }
      else
      {
          consonant++;
      }
    }
  }
  printf("VOWEL COUNT= %d\n",vowel);
  printf("CONSONANT COUNT= %d\n",consonant);
  
} 
int main()
{
    int arr[100];
    printf("Enter the string: ");
    gets(arr);
    countVC(arr);
}