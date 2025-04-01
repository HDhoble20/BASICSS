#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day:");
    scanf("%d",&day);

    switch (day)
    {
    case 1 :
        printf("sun");
        break;
    case 2 :
        printf("mon");
        break;
    case 3 :
        printf("tue");
        break;
    case 4 :
        printf("wed");
        break;
    
    case 5 :
        printf("thu");
        break;
    
    case 6 :
        printf("fri");
        break;     
    
    case 7 :
        printf("sat");
        break;       
    default:
        printf("Enter only 1 to 7");
        break;
    }
}