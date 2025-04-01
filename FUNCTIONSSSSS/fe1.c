#include<stdio.h>
int diameterOfC(int x)
{
    int d=2*x*x;
    return d;
}
int circumferenceOfC(int x)
{
    int c= 2*3.145*x;
    return c;
}
int areaOfC(int x)
{
    int a=3.145*x*x;
    return a;
}

main()
{
    int a;
    printf("Enter the radius of the circle:");
    scanf("%d",&a);
    int diameter=diameterOfC(a);
    printf("Diameter of the circle is: %d\n",diameter);
    int circumference=circumferenceOfC(a);
    printf("circumference of the circle is: %d\n",circumference);
    int area=areaOfC(a);
    printf("Area of the circle is: %d\n",area);
}