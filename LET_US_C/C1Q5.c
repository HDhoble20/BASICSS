#include<stdio.h>
int main()
{
    int l,b,r,areaR,peri;
    float areaC,circum;
    float pi=3.14;

    printf("Enter the lenght of the rectangle:--");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle:--");
    scanf("%d",&b);

    areaR=l*b;
    peri=l+b+l+b;

    printf("Area of rectangle is:--%d\n",areaR);
    printf("Perimeter of rectangle is:--%d\n\n",peri);

    printf("Enter the raidus of the circle:--");
    scanf("%d",&r);

    areaC=pi*r*r;
    circum=2*pi*r;

    printf("Area of circle is:--%.1f\n",areaC);  
    printf("Circumference of circle is:--%.1f",circum);

    return 0;



    
}