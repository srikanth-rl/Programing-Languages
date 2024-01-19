//                 [Logical Operators](are using in more than one conditions)
/*

   TYPES           MEANING

    &&             logical AND('True' only if All the conditions are true)
    ||             logical OR('True' if at-least any one condition is true)
    !              logical NOT('True' if the output is "0"
                               'False' if the output is "1")


                ............
*/

#include<stdio.h>
int main()
{

    int a,b,c,d;

    printf("\n    Enter your Marks : ");
    scanf("%d",&a);

//  LOGICAL AND--"&&"
    b=(a>=35) && (a<=100);//both should be true to pass in the exam...

//  LOGICAL OR--"||"
    c=(a>=35) || (a<=100);//fail mark also considered as pass....

//  LOGICAL NOT--"!"
    d=!(a>=35);
    /*
     [E.g.a=34] which is FALSE to the condition but in "NOT"
     will print as true (i.e.)'1'
     [E.g.a=35] which is TRUE to the condition but in "NOT"
     will print as false (i.e.)'0'

            ......          */
    printf("\n\n\tYou are PASS             : %d",b);
    printf("\n\n\tYou may be PASS 'OR' FAIL: %d",c);
    printf("\n\n\t'FAIL' if OP is 1,\n\t'PASS' if OP is 0.  (see below)\n\n\t  OP: %d\n\n\n",d);//OP=OUTPUT

    return 0;
}
