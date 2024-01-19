/*
first we have to know about decimal & binary numbers......


DECIMAL(0-9)    BINARY(0,1)   OCTAL(0-7)    HEXADECIMAL(0-9)
0               0000            00              0
1               0001            01              1
2               0010            02              2
3               0011            03              3
4               0100            04              4
5               0101            05              5
6               0110            06              6
7               0111            07              7
8               1000            10              8
9               1001            11              9
10              1010            12              A
11              1011            13              B
12              1100            14              C
13              1101            15              D
14              1110            16              E
15              1111            17              F

..              ....            ..              .

..              ....            ..              .

..              ....            ..              .

..              ....            ..              .

55              110111          67              37
25              11001           31              15
45              101101          55              2D
..              ....            ..              .

..              ....            ..              .

                ..........
                                                                                    */
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n\t    Enter two numbers : ",a,b);
    scanf("%d %d",&a,&b);


    /*         TYPES

    BITWISE "AND"---           '&'

        If corresponding Binary's. BOTH are 1 then the output is '1'
    E.g.    a=1-->0001,
            b=1-->0001  ....   here the output is
                " 0001 "== will print the decimal value of this output which is '1'..

    BITWISE "OR"---            '|'

        If corresponding Binary's. ANY one is '1' then the output is '1'
    E.g.     a=1-->0001,
             b=2-->0010  ....   here the output is
                 " 0011 "== will print the decimal value of this output which is '3'..

    BITWISE "XOR"---           '^'

        If corresponding Binary's. are '1 and 0' then the output is '1'
    E.g.    a=1-->0001,
            b=3-->0011   ....   here the output is
                " 0010 "== will print the decimal value of this output which is '2'..

    BITWISE "NOT"---           '~'

        NEGATIVE Binary
    E.g.    a=1; First the given no.is add by '1' and then the output :
            will print the Negative value of the input which is '-1'..

    BITWISE "LEFT SHIFT"---    '<<'

            Let the value "a" is left shifted by 3;
            a=1;BINARY of 'a'-->1=0001 Now left shift by 3 no.s (OR) intimate 3 '0's on LEFT side;
            "1000"== will print the corresponding decimal value of this output which is '8'..

    BITWISE "RIGHT SHIFT"---    '>>'

            Let the value "a" is RIGHT shifted by 2;
            a=1;BINARY of 'a'-->16=10000 Now RIGHT shift by 2 (OR) take the last two values
            "100"== will print the corresponding decimal value of this output which is '4'..

                    .........
    */

    printf("\n\n    Bitwise 'AND' : %d",a&b);
    printf("\n    Bitwise 'OR'  : %d",a|b);
    printf("\n    Bitwise 'XOR' : %d",a^b);
    printf("\n    Bitwise 'NOT' : %d",~b);
    printf("\n\n    Bitwise 'LEFT SHIFT'  : %d",a<<1);
    printf("\n\n    Bitwise 'RIGHT SHIFT' : %d\n\n\n",a>>2);

    return 0;
}

//         'OPERATORS'  END's...,
