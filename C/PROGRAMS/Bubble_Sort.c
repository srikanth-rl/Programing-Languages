//Sorting in one for loop;
#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i=-1;
        }
    }
    for(i=0;i<n;i++)printf("%d ",arr[i]);
}