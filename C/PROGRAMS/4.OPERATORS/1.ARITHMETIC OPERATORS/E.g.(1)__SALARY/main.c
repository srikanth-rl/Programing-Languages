/*

Ramesh's basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary,
and house rent allowance is 20% of basic salary.
Write a program to calculate his GROSS SALARY.
   .......
given,DEARNESS allowance means "ITHARA SELAVUGAL"(like transport,petrol..)
      RENT ALLOWANCE means "HOUSE RENT"..

TO FIND RAMESH'S OVERALL SALARY....

*/
#include<stdio.h>
int main()
{
 float r,l,n,s;
 printf("\nEnter BASIC SALARY : ");
 scanf("%f",&r);//r=BASIC SALARY(given)
 l=r*0.4;////l=DEARNESS ALLOWANCE(40% from r)
 n=r*0.2;//n=RENT ALLOWANCE(20% from r)
 s=r+l+n;

 printf("\nRamesh's BASIC SALARY is %.2f",r);
 printf("\nRamesh's DEARNESS ALLOWANCE is %.2f",l);
 printf("\nRamesh's RENT ALLOWANCE is %.2f",n);
 printf("\nRamesh's GROSS SALARY is %.2f",s);

 return 0;
}
