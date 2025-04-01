#include<stdio.h>
main()
{
    int unit;
    double bill;
    double totalBill;

    printf("Enter the No of unit \n");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=unit*0.50;
    }
    else if (unit>50 && unit<151)
    {
        bill=unit*0.75;
    }
    else if (unit>151 && unit<251)
    {
        bill=unit*1.2;
    }
    else{
        bill=unit*1.5;
    }
    totalBill=bill+(bill*0.2);
    printf("UNIT %d charge %.2lf Rs",unit,totalBill);
    
    
    
}