//                 [REVERSING 'n' NO. OF DIGITS]

/*
 If a five-digit no.is input.Write a program
to reverse the number.

            ........
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,r;
    printf("\n\t Enter the 5-Digit no : ");
    scanf("%d",&a);

    //(let'a' be the 5-digit no. which is 12345)
    b=a/10;//now a=1234--here the remainder is '5'...
    c=a%10;/*here last value rearranged into the 1st place
        so:  c=5----1st digit*/

    d=b/10;//now d=123
    e=b%10;//e=4----2nd digit

    f=d/10;//d=12
    g=d%10;//g=3----3rd digit

    i=f%10;//i=2----4th digit
    h=f/10;//now h=1----5th digit

    //now,,
    r = (c*10000) + (e*1000) + (g*100) + (i*10) + (h*1);
    /*here^we have to specify the 'places' and
    then we have to add it to find a 5-Digit no...
    AND FINALLY --it will be the reversed order
                   ........
                       */


    printf("\n\n\t The REVERSE of 5-Digit no. is :  %d\n\n",r);

    return 0;
}
