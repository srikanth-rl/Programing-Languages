#include<stdio.h>
int fib_recursive(int n){
    if(n<=1)return n;
    return fib_recursive(n-2) + fib_recursive(n-1);
}
int fib_Dynamic(int n){
    int arr[n+1];//here n+1 size one extra case for n = 0;
    arr[0] = 0; arr[1] = 1;
    for(int i=2;i<=n;i++)
        arr[i] = arr[i-1]+arr[i-2];
    return arr[n];
}/*Memoization method*/
int main(){
    printf("%d\n",fib_recursive(5));
    printf("%d\n",fib_recursive(6));
    printf("%d\n",fib_recursive(7));
/*  printf("%d\n",fib_recursive(50));   takes 125 trillion calls using recursive...*/
    printf("%d\n",fib_Dynamic(48));
}