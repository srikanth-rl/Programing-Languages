/*

        TYPES               E.G.        MEANING

     (INCREMENT)++        ++a,a++      ++a  ----pre-increment[1st increment and then show output]
                                        a++ ----post-increment[1st show output and then increment]

     (DECREMENT)--        --a,a--      --a  ---pre-Decrement[1st decrement and then show output]
                                        a-- ----post-decrement[1st show output and then decreased]

                            ..........
*/

#include<stdio.h>
int main()
{
    int a;
    printf("\n\t  Enter the number 'a' is : ",a);
    scanf("\t%d",&a);

/*
    PRE-INCREAMENT -->   ++a
        e.g.(a=5)it will first increment & then stored in "a".
        Here the output is a=6
            ......

    POST-INCREAMENT -->  a++
        by the above,, now the value of a=6;
        In POST-INCREMENT first it will stored & then
        increaed in next step.
        Here the output is a=6
                .....                               */
/*
    PRE-DECREMENT -->    --a
        by the above,, now the value of a=7;
        In PRE-DECREMENT first Decreased & then stored in "a".
        Here the output is a=6
            ......

    POST-DECREMENT -->    a--
        by the above,, now the value of a=5;
        In POST-DECREMENT first it will stored & then
        Decreased in next step.
        Here the output is a=6
                .....                               */

    printf("\n\n\tThe PRE-INCREAMENT of the given value is  : %d",++a);
    printf("\n\tThe POST-INCREAMENT of the given value is : %d",a++);
    printf("\n\n\t      Now the value of 'a' is :  %d ",a);

    printf("\n\n\tThe PRE-DECREMENT of the given value is   : %d",--a);
    printf("\n\tThe POST-DECREMENT of the given value is  : %d",a--);
    printf("\n\n\t      Now the value of 'a' is :  %d\n\n\n",a);


    return 0;
}
