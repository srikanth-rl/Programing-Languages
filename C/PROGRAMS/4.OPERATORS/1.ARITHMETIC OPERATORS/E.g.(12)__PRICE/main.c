
//                  To Find[the cost price]

/*
 If the total selling price of 15 items and
the total profit earned on them is input.Write
a program to find the cost price of each item.

                    ...........

USE float type because sometimes
the items rate may in 'paise'...

*/

#include<stdio.h>
int main()

{
    float tot_sp,tot_pf;/*
    tot_sp=total selling price of all items.
    tot_cp=total cost price of all items..
    tot_pf=total profit earned...
    sp=selling price of each item....
    cp=cost price of each item.....*/

    printf("\n  Enter the total SELLING price of 15 items :Rs. ");
    scanf("%f",&tot_sp);

    printf("\n  Enter the PROFIT earned on that 15 items  :Rs. ");
    scanf("\n%f",&tot_pf);

    float cp,sp,tot_cp;

    tot_cp = tot_sp-tot_pf;
        cp = tot_cp/15;
        sp = tot_sp/15;

    printf("\n       The total COST price of 15 items is  : Rs. %.2f",tot_cp);
    printf("\n       The SELLLING price of Each item is   : Rs. %.2f\n",sp);

    printf("\n\n    Ans:- The COST price of Each item is    : Rs. %.2f\n\n\n\n",cp);

    return 0;
}
