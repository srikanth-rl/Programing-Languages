//             TO FIND:[AVERAGE MARKS and PERCENTAGE MARKS]

/*
 If the marks obtained by a student in 5 different
subjects are input through the keyboard,Find out
the AGGREGATE MARKS & PERCENTAGE MARKS
obtained by the student.Assume that the maximum marks
that can be obtained by a student in each subject is 100.

.....

*/

#include <stdio.h>
int main()

{
  int m1,m2,m3,m4,m5,total;//m1,m2.... means marks of each subject...
  printf("Enter five marks : ");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    float avg;

  total = m1+m2+m3+m4+m5;
    avg = total/5; //OR-->total/5.0 it will print the exact divided value...

    printf("\nAGGREGATE MARKS   : %d",total);
    printf("\nPERCENTAGE MARKS  : %.2f%%",avg);

    return 0;



}
