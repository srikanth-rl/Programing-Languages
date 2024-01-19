/*
    "If" the given statement is 'true' it will move to our code..
    "else" it will print the rest of what we given..,

                    ............                                        */

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
    else
    {
        printf("\n\n\n\t%s Age is %d so Not-Eligible for Voting.\n\n\n",name,age);
    }

    return 0;
}
