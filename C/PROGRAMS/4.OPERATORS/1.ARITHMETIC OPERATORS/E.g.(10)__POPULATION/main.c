//              TO FIND[TOTAL ILLITERATES]

/* In a town,the percentage of Men is 52.
The percentage of Total literacy is 48.
If the Total percentage of literacy men is 35 of
the Total-population,Write a program to find the
Total illiterate Men & Women if the Population of the
town is 80,000.

                    .........
*/

#include<stdio.h>
int main()
{
    int Totpop=80000;
    int Totmen,Totwomen,Totlit,Total_ill,litmen,litwomen,ilm,ilw;
//     HERE^Total-ill=total illiterate men & women....

//    (Given)
    Totmen=(52*Totpop)/100;
    Totlit=(48*Totpop)/100;
    litmen=(35*Totpop)/100;
    Totwomen=Totpop-Totmen;

//    (W.K.T) Total Men=literate men + illiterate men....
    ilm=Totmen-litmen;
//    (W.K.T) Total literacy=literate Men + literate Women....
    litwomen=Totlit-litmen;
//    (W.K.T) Total POPULATION = Total Men + Total Women.....
    ilw=Totwomen-litwomen;

    //NOW:- - -
    printf("\n The TOTAL POPULATION in the town is : %d",Totpop);
    printf("\n The TOTAL MEN in the town is        : %d",Totmen);
    printf("\n The TOTAL WOMEN in the town is      : %d",Totwomen);
    printf("\n The TOTAL LITERACY in the town is   : %d",Totlit);

    Total_ill=ilm+ilw;
    printf("\n\n\n  ANS:The TOTAL illiterate MEN & WOMEN in the town is :- %d\n\n",Total_ill);

    return 0;
}

