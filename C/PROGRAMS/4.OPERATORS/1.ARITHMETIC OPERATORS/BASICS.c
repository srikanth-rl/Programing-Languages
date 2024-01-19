/*
    Arithmetic operator..
+   -> addition
-   -> subtraction
*   -> multiplication
/   -> division
%   -> remainder(modulus)

......*/
#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("ENTER 2 NO'S   : ");
    scanf("%d%d",&a,&b);

    //ADDITION
    c=a+b;
    printf("\nSUM          : %d",c);


    //SUBTRACTION
    c=a-b;
    printf("\n\nDIFFERANCE   : %d",c);

    //MULTIPLICATION
    c=a*b;
    printf("\n\nPRODUCT      : %d",c);

    //DIVISION
    x=(float)a/(float)b;//the given values are integer so if we want accurate division;USE FLOAT FOR THE GIVEN VALUES..,
    printf("\n\nQUOTIENT     : %.2f",x);//use FLOAT to get the accurate division value..,

    //MODULOUS
    c=a%b;
    printf("\n\nREMAINDER    : %d\n",c);
    return 0;
}

