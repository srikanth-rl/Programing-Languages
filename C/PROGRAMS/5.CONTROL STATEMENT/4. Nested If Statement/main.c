/*
        In NESTED If statement:-FIRST it will check the
    "1st condition".,If that is 'True' will enter into
    that  1st condition and then it will check the
    Next condition.,If that is "TRUE" will print..
    'Else'it will check the Other conditions in that
    any 1 condition is "TRUE" will print..;[IN THAT]
    if nothing is "TRUE"..,will print the last-one..

        In the beginning,Whether the "1st condition" "Fails"
    will suddenly move and print the last "ELSE" part..

                     .........                                      */

#include<stdio.h>
int main()
{
    int r;
    printf("\n\n\tEnter A Number        'R' is: ",r);
    scanf("\t%d",&r);

    int l;
    printf("\n\n\tEnter Another Number 'L' is : ",l);
    scanf("\t%d",&l);

//  CONDITION:--

    if(r!=l)
    {
        if(r>l)
        {
            printf("\n\n\t%d--> 'R' is GREATER\n\n",r);
        }
        else
        {
            printf("\n\n\t%d-->'L' is GREATER\n\n",l);
        }
    }

    else
    {
        printf("\n\n\t %d-->'R' and 'L' Both are EQUAL\n\n");

    }
    return 0;
}
