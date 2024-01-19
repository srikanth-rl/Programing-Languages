//          To Find[AREA & PERIMETER]

/*
 The length & breadth of a rectangle
and radius of a circle are input through
the keyboard.Write a program to calculate
the area & perimeter of the rectangle,and
the area & circumference of the circle.

    .....
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b,r,aR,pR,aC,cC;

    printf("LENGTH & BREADTH: \n");
    scanf("%f %f",&l,&b);
    printf("RADIUS : \n");
    scanf("%f",&r);

/* given:-
aR=area of rectangle;
pR=perimeter of rectangle;
aC=area of circle;
cC=circumference of circle...*/

    aR = l*b;
    pR = 2*(l+b);
    aC = 3.14*r*r;//pi=3.14
    cC = 2*3.14*r;

    printf("\nArea of the RECTANGLE       : %.2f",aR);
    printf("\nPerimeter of the RECTANGLE  : %.2f",pR);
    printf("\nArea of the CIRCLE          : %.2f",aC);
    printf("\nCircumference of the CIRCLE : %.2f",cC);

    return 0;
}










