//              [RELATIONAL OPERATORS]
/*

    TYPES      E.g.      MEANING

    ==        a==b     Equal to(both are same)

    >         a>b      Greater than('a' is greater than 'b')

    <         a<b      Less than('a' is Lesser than 'b')

    !=        a!=b     Not Equal to(both may not be same)

    >=        a>=b     Greater than or Equal to('a' may be greater than 'b' or same as 'b')

    <=        a<=b     Less than or Equal to('a' may be lesser than 'b' or same as 'b')


                        ..............
*/

#include<stdio.h>
int main()
{
    int a,b;

    printf("\n\t  Enter Any two numbers : ");
    scanf("%d %d",&a,&b);
/*
 If the condition is 'TRUE' will print "1" otherwise
 If the condition is 'FALSE' will print "0"....*/

    printf("\n\n\t'Equal to' OPERATOR     : %d",a==b);
    printf("\n\t'Greater than' OPERATOR : %d",a>b);
    printf("\n\t'Less than' OPERATOR    : %d",a<b);
    printf("\n\t'Not Equal to' OPERATOR : %d",a!=b);
    printf("\n\t'Greater than or Equal to' OPERATOR : %d",a>=b);
    printf("\n\t'Less than or Equal to' OPERATOR    : %d\n\n\n",a<=b);

    return 0;
}
