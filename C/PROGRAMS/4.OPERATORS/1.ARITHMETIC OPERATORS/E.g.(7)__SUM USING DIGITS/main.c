//                    CALCULATING[Sum of 'n' NO. OF DIGITS]

/*
  If a five-digit no. is input.Write a program
to calculate the sum of its digits.(HINT:Use the modulus operator "%")

                            .......
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,sum;
    printf("\n Enter the 5-Digit no: ");
    scanf("%d",&a);

    //(let'a' be the 5-digit no. which is 12345)
    b=a/10;//now a=1234--here the remainder is '5'...
    c=a%10;//c=5--single digit

    d=b/10;//now d=123
    e=b%10;//e=4--single digit

    f=d/10;//d=12
    g=d%10;//g=3--single digit

    h=f/10;//now h=1--single digit
    i=f%10;//i=2--single digit

    //now,,
    sum =  c+e+g+h+i;//--it will be the Each digits

    printf("\n\n\t The sum of each digits in this 5-Digit no. is :  %d",sum);

    return 0;
}
