#include<stdio.h>
int main(){
    char op;
    float x,y;
    int n;
   
    printf("************************\n");
    printf("Enter any operator...\n (Add)+   \n (SUB)-   \n (MUL)*   \n (DIV)/:\n");
    scanf(" %c",&op);

    printf("Enter the first number...\n");
    scanf("%f",&x);

    printf("Enter the second number...\n");
    scanf("%f",&y);
    
    printf("************************\n");
    switch (op)
    {
    case '+':
        printf("%.1f + %.1f \n= %.1f",x,y,x+y);
        break;
    
    case '-':
        printf("%.1f - %.1f \n= %.1f",x,y,x-y);
        break;
    
    case '*':
        printf("%.1f * %.1f \n= %.1f",x,y,x*y);
        break;
    
    case '/':
        printf("%.1f / %.1f\n = %.1f",x,y,x/y);
        break;        
    default:
        printf("Error!!!!!");
        
    }
    printf("\nPress 1 to continue , 2 to exit.....\n");
    scanf("%d",&n);
}
    
  
