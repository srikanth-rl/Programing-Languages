#include<stdio.h>
int Pyramid(int i,int n){
    for(int k=n;k>0;k--)
        if(i==k)printf("* ");//1st_right_angle
        else printf("  ");
    for(int j=2;j<=n;j++)    //j Looop starts from 2nd row bcz 1st row already have "*" by 1st_angle
        if(i==j)printf("* ");//1st_right_angle
        else printf("  ");
    printf("\n");
}
void print(int i,int n){
    for (int j = 1; j < 2*n; j++) 
        printf(j <= i || j >= 2*n - i ? "*  ":"   ");
    printf("\n");
}
int main(){
    int n=5;printf("\nDiamond Using '*' : \n\n");
    for(int i=1;i<=n;i++)Pyramid(i,n);    //run & print the Full_Pyramid upto first 4-lines
    for(int i=n-1;i>=0;i--)Pyramid(i,n); //run & print the Inverted_Pyramid from 5th-line upto 0th-line
    printf("Diamond at center:\n\n");
    for (int i = n; i > 0; i--)
        print(i,n);
    for (int i = 2; i <= n; i++) 
        print(i,n);
}