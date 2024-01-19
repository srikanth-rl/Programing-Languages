#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if(n>m){
        n-=k;
        printf("%d",n-m);
    }
    if(m>n){
        m-=k;
        printf("%d",m-n);
    }
}