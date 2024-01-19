#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for(int k=i;k<n;k++)
            printf("  ");
        char ch = 'A';
        for(int j = 0;j<2*i-1;j++){
            if(j<(2*i)/2)
                printf("%c ",ch++);
            else 
                printf("%c ",--ch-1);
        }printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int k=i;k<n;k++)
            printf("  ");
        char ch = 'A';
        for(int j = 0;j<2*i-1;j++){
            if(j<(2*i)/2)
                printf("%c ",ch++);
            else 
                printf("%c ",--ch-1);
        }printf("\n");
    }
    
    for(int i=1;i<n+1;i++){
        for(int k=i;k<n;k++)
            printf("  ");
        int ch = 1;
        for(int j = 0;j<2*i-1;j++){
            if(j<(2*i)/2)
                printf("%d ",ch++);
            else 
                printf("%d ",--ch-1);
        }printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int k=i;k<n;k++)
            printf("  ");
        int ch = 1;
        for(int j = 0;j<2*i-1;j++){
            if(j<(2*i)/2)
                printf("%d ",ch++);
            else 
                printf("%d ",--ch-1);
        }printf("\n");
    }return 0;
}