/*
    "If statement" is nothing but whether the
given condition is 'TRUE' it will move to the rest of our code ....

SAMPLE CODE:- Below
                        .......                                             */

#include<stdio.h>
int main()
{
    char name[10];
    int age;

    printf("\n\n\t Enter Your NAME : ",name);
    scanf("\t%s",&name);//USE %s bcz., we are giving a word (i.e)name...%c is only for a single letter....

    printf("\n\n\t Enter Your AGE  : ",age);
    scanf("\t%d",&age);

//  CONDITION:--

    if (age>=18)
    {
        printf("\n\n\n\t%s Age is %d and so Eligible for Voting.\n\n\n",name,age);
    }
    return 0;
}
