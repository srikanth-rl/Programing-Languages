/*
    "If" the first condition is 'TRUE' will enter
     into that code And that will be the output.

    "Else If" the first condition is 'FALSE' will check
     2nd.,If this condition is 'True' will enter
     into that code And that will be the output..

     "ELSE"---all the conditions are failed it will
     move to the else part and will print that what we given...

                        .........                                       */

#include<stdio.h>
int main()
{
    int a;
    printf("\n\n\tEnter a Number : ",a);
    scanf("\t%d",&a);

//  CONDITION:--

    if(a==0)
    {
        printf("\n\n\t %d-->It is 'ZERO'\n\n",a);
    }
    else if(a>0)
    {
        printf("\n\n\t %d-->It is a 'POSITIVE VALUE'\n\n",a);
    }
    else{
        printf("\n\n\t %d-->It is a 'NEGATIVE VALUE'\n\n",a);
    }

    return 0;
}
