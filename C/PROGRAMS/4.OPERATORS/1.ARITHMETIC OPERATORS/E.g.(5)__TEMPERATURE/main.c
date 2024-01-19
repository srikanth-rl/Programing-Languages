//          To Convert[FAHRENHEIT into CELSIUS]
/*
 Temperature of a city in Fahrenheit degrees
is input.Write a program to convert this
temperature into Centigrade degrees.

        ....

*/

#include<stdio.h>
int main()
{
    float f,c;

    printf("Enter the FAHRENHEIT : " );
    scanf("%f",&f);

    c = (f-32)*5/9;

    printf("CELSIUS : %.2f",c);

    return 0;
}
