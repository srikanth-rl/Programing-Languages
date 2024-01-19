//                TO CALCULATE[NO. of CURRENCY NOTES]
/*
 A cashier has currency notes of denominations 10,50,100.
If the amount to be withdrawn is input.Find the total no.
of currency notes of each denomination the cashier will have
to give the withdrawer.

                        .........
    here,if the withdrawer need to take
(e.g)1578--->
the cashier to give:- '15'=hundreds;15*100=1500
                      '01'=fifty's;1*50=50(1500+50=1550)
                      '02'=ten's;2*10(1550+20=1570)
*/

#include<stdio.h>
int main()
{

    int amt;//we have to declare the unknown amount....
    printf("\nEnter the amount to Withdraw : ");
    scanf("%d",&amt);

    int a,a1,b,c;

//    The amount can be in any digits:-Eg.15567,500,3459....

//    Let the amount = 12398;
    a=(amt/100);        //now A=123 (100's)==12300
   a1=(amt%100)/50;     //now a=1(50's)==12350
            /*after that 100 Rs. notes the remaining
             have to divide by 50 for
             giving 50 Rs. notes*/
    b=((amt%100)%50)/10; //now b=4(10's)==12390
    c=((amt%100)%50)%10;//now c=8(01's)==12398.....

    printf("\n\n  The required no. of notes in 100's are    : %d\n",a);
    printf("  The required no. of notes in 50's are     : %d\n",a1);
    printf("  The required no. of notes in 10's are     : %d\n",b);
    printf("  The amount still remaining are            : %d\n\n",c);

    return 0;
}
