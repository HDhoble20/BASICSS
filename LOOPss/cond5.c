#include <stdio.h>
   int main(){
    float retailPrice,payableAmt;
    puts("enter retail price:");
    scanf("%f", &retailPrice);
    
    (retailPrice>=500) ?printf("Eligible for discount and Net payable amount is %.1f\n Discount availed  %.1f",(retailPrice-retailPrice*0.1),(retailPrice-(payableAmt=retailPrice-retailPrice*0.1))) : printf("not eligible for discount");


   
   }
