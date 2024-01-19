//             CALCULATING[SUM of 'specific place' in "n" NO. OF DIGITS]

/*
 If a four-digit no. is input.Write a program to
obtain sum of the "FIRST & LAST" digit of this number.

                        .............
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,sum;
    printf("\n Enter the 4-Digit no: ");
    scanf("%d",&a);

    //(let'a' be the 4-digit no. which is 1234)
    b=a/10;//now a=123--here the remainder is '4'...
    c=a%10;//'remainder'of b is c=4----it will be the 4th digit[LAST]

    d=b/10;//now d=12
    e=b%10;//e=3--3rd digit

    f=d/10;//d=1--1st digit[FIRST]
    g=d%10;//g=2--2nd digit

    //now,,
    sum =  c+f;//--it will be the sum of that 2 digits

    printf("\n\n\t The sum of FIRST & LAST digit from this 4-Digit no. is :  %d",sum);

    return 0;
}
