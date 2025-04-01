#include<stdio.h>
  int main() {
   int basicSalary,dAllowance,rent,grossSalary;
   printf("Enter basic salary: ");
   scanf("%d",&basicSalary);

   dAllowance= basicSalary*0.4;
   rent=basicSalary*0.2;
   grossSalary=basicSalary+rent+dAllowance;

  
   printf("basic salary is:----- %d\n",basicSalary);
   printf("Dearness allowance is:----- %d\n",dAllowance);
   printf("House rent is:----- %d\n",rent);
   printf("grossSalary is:----- %d\n",grossSalary);
   return 0;








  }