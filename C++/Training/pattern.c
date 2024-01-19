#include<stdio.h>
void Triangle(int n){
    int k = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*k)-2;j++)
            printf(" ");
        k--;
        for(int j=1;j<=(2*i)-1;j++)
            printf("* ");
        printf("\n");
    }
}
void inverseTriangle(int n){
    int k = 0;
    for(int i=n;i>0;i--){
        for(int j = 1;j<=k;j++)
            printf(" ");
        k+=2;
        for(int j = 1;j<=(2*i)-1;j++)
            printf("* ");
        printf("\n");
    }    
}
void diamond(int n){
    int k = n;
    for(int i=1;i<n;i++){
        for(int j=1;j<=(2*k)-2;j++)
            printf(" ");
        k--;
        int end = (2*i)-1;
        for(int j=1;j<=end;j++)
            if(j==end||j==1)
                printf("* ");
            else 
                printf("  ");
        printf("\n");
    }
    k = 0;
    for(int i=n;i>0;i--){
        for(int j = 1;j<=k;j++)
            printf(" ");
        k+=2;
        int end = (2*i)-1;
        for(int j = 1;j<=end;j++)
            if(j==end||j==1)
                printf("* ");
            else 
                printf("  ");
        printf("\n");
    }    
}

int main(){
    int n = 5;
    Triangle(n);
        printf("\n");
    inverseTriangle(n);
        printf("\n");
    diamond(n);
}