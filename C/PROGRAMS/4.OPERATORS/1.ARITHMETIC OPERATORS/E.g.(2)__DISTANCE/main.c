//      [CONVERTING THE DISTANCES]
/*
 The distance b/w two cities(in k.m.)is
 input through the keyboard.Write a program
 to convert and print this distance in
 Meters,Feet,Inches and Centimeters.

 ..... */

 #include <stdio.h>
 int main()

 {

     float km,m,cm,ft,in;

     printf("Enter the KILOMETER : ");
     scanf("%f",&km);

     m = km*1000;
    cm = m*100;
    ft = cm/30.48;//OR-->feet=inch/12
    in = cm/2.54;//OR--->inch=ft*12

    printf("\nMETER     : %.2f",m);
    printf("\nCENTIMETER: %.2f",cm);
    printf("\nFEET      : %.2f",ft);
    printf("\nINCH      : %.2f",in);

    return 0;
 }
