#include<stdio.h>
#include<conio.h>
int main() {
    char grade;
    printf("enter the grade from A to F\n");
    printf("enter the grade\n");
    scanf("%c",&grade);

    switch (grade)
    {
        case 'A':
              printf("excellent.\n");
        break;
        
        case 'B':
              printf("very good\n");
        break;
        case 'C':
              printf("good\n");
        break;
        case 'D':
              printf("bad\n");
        break;
        case 'E':
              printf("very bad\n");
        break;
        case 'F':
              printf("fail\n");
        break;
         default:
               printf("invalid input\n");
    }
    return 0;

    
}