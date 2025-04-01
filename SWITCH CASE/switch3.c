#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a' :
    case 'A' :    
    case 'e' :
    case 'E' :
    case 'i' :
    case 'I' :
    case 'o' :
    case 'O' :
    case 'u' :
    case 'U' :
            printf("character is vowel..");
        break;    
    default:
            printf("Charater is consonant");
        break;
    }
}