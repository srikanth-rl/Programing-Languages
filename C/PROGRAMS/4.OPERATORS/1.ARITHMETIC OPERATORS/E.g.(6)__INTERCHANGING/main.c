//                       To Find[SWAPING]

/*
 Two numbers are input into two locations
C & D.Write a program to 'interchange'
the contents of C & D.

                            .....
*/

#include<stdio.h>
int main()
{
    int C,D,r1,s1;
    printf("Enter the values of C & D :");
    scanf("%d %d",&C,&D);

    r1=D;
    s1=C;

    printf("\nThe INTERCHANGE of C is :%d",r1);
    printf("\nThe INTERCHANGE of D is :%d",s1);

    return 0;
}
