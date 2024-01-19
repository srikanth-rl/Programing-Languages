#include<stdio.h>
int findFact(int no){
    return no==0?1:no*findFact(no-1);
}
int main(){
    printf("\n\n");
    // int age;//1.
    // printf("Enter your age: ");
    // scanf("%d",&age);
    // if (age>17)
    //     printf("Your age is %d,You are Eligible to vote\n",age);
    // else
    //     printf("Your age is %d,You are Not Eligible to vote\n",age);

    // for (int i=1;i<101;i++)//2.
    //     if(i%2)
    //         printf("%d ",i);

    // int no;//3.
    // printf("Enter a no to find Factorial : ");
    // scanf("%d",&no);
    // printf("Factorial of %d is %d",no,findFact(no));
    int n;//4.
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int charge;
        scanf("%d",&charge);
        printf(charge<16?"Yes\n":"No\n");
    }
}