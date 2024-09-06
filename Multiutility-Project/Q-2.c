#include <stdio.h>

int main(void) { 
  
float BS;
float HRA;
float TA;
float DA;
float HRA_amount;
float TA_amount;
float DA_amount;
float Gross_salary;
 
  printf("enter the number of BS :");
  scanf("%f",&BS);
  
  printf("\nenter the number of HRA :");
  scanf("%f",&HRA);
  
  printf("\nenter the number of TA :");
  scanf("%f",&TA);
  
  printf("\nenter the number of DA :");
  scanf("%f",&DA);
  
  HRA_amount = (HRA/100)*BS;
  DA_amount = (DA/100)*BS;
  TA_amount = (TA/100)*BS;
  
  Gross_salary = BS + HRA_amount+DA_amount+TA_amount;

  printf("the amount : %f",Gross_salary);

  return 0;
}