#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define max 999
int top=-1,stack[max];
void push(char x){
    if(top>=max-1)printf("FULL (or) STACK_OVERFLOW");
    else stack[++top]=x;}
char pop(){
    if(top<=-1)printf("EMPTY (or) STACK_UNDERFLOW");
    else return stack[top--];}
bool Duplicate_Parenthesis(char str[]){
    for(int i=0;i<strlen(str);i++){
        int count=0;
        if(str[i]==')'){
            while(pop()!='(')count++;
            if(!count)return true;}
        else push(str[i]);}
    return false;
}
int main(){
    char str[999];scanf("%s",str);
    if(Duplicate_Parenthesis(str))printf("%s have Duplicate parenthesis.",str);
    else printf("%s does not have Duplicate parenthesis",str);
}