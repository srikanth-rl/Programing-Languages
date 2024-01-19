#include <stdio.h>
void Pyramid_top(int i,int n){
    for(int k=n;k>0;k--)
        if(i>=k)printf("* ");
        else printf("  ");
    for(int j=2;j<=n;j++)     
        if(i>=j)printf("* ");
        else printf("  ");
    printf("\n");
}
void Pyramid_side(int i,int n,int line){
    for(int j=1;j<=n;j++)     
        if(i>=j)printf("* ");
        else printf("  ");
    for(int k=n-1;k>=1;k--)
        if(i>=k)printf("* ");
        else printf("  ");
    if(i!=1 | line==1)printf("\n");}
int main(){
    int n=5;printf("\n");
    for(int i=1;i<=n;i++)Pyramid_top(i,n); 
    for(int i=1;i<=n;i++)Pyramid_side(i,n,1);
    for(int i=n-1;i>=0;i--)Pyramid_side(i,n,0);  
    for(int i=n;i>=1;i--)Pyramid_top(i,n); 
}