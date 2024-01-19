#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Integer(const void*a,const void*b){
    return (*(int*)a-*(int*)b);
}
int String(const void*a,const void*b){
    return strcmp((char*)a,(char*)b);
} 
int main(){
    int n;scanf("%d",&n);
    int arr[n],i=0;
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),Integer);
    for(i=0;i<n;i++)printf("%d ",arr[i]);
    char str[90][4];
    for(i=0;i<n;i++)scanf("%s",str[i]);
    qsort(str,n,4,String);
    for(i=0;i<n;i++)printf("\n%s",str[i]);
}