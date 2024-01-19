//                 [ASSIGNMENT OPERATORS]


/*
TYPES    E.g.         MEANING

  =      A=B          a = b

 +=      A+=B         a = a+b

 -=      A-=B         a = a-b

 *=      A*=B         a = a*b

 /=      A/=B         a = a/b

 %=      A%=B         a = a%b

                    ..........
*/

#include <stdio.h>
int main()
{
    int a=10,b=15;


//   USING '='
    a=b;//Here the value of 'b' will be ASSIGN in 'a'.
    printf("\nNow the value of a is EQUAL to: %d",a);//now a=15..

//   USING '+='
    a+=b;//a=a+b;which is a=15+15.
    printf("\n\n\tThe value of a+ is EQUAL to: %d",a);//now a=30....

//   USING '-='
    a-=b;//a=a-b;which is a=30-15.
    printf("\n\tThe value of a- is EQUAL to: %d",a);//now a=15....

//   USING '*='
    a*=b;//a=a*b;which is a=15*15.
    printf("\n\tThe value of a* is EQUAL to: %d",a);//now a=225....

//   USING '/='
    a/=b;//a=a/b;which is a=225/15.
    printf("\n\tThe value of a/ is EQUAL to: %d",a);//now a=15....

//   USING '%='
    a%=b;//a=a%b(remainder of a/b);which is a=0.
    printf("\n\tThe value of a%% is EQUAL to: %d\n\n",a);//now a=0.....

    return 0;
}



