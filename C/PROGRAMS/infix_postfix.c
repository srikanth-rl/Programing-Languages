#include<stdio.h>
#include<string.h>
#include<ctype.h>
int top=-1,stack[90];
void push(char x){stack[++top]=x;}
char pop(){return stack[top--];}
int check(char x){
    if(x=='(')            return 0;
    else if(x=='+'|x=='-')return 1;
    else if(x=='*'|x=='/')return 2;
    else if(x=='^')       return 3;
}
void infix_To_postfix(char str[]){
    char post[strlen(str)],c;
    int i=0,k=-1;
    while(str[i]!='\0'){
        if(str[i]=='(')
            push(str[i]);
        else if(isalnum(str[i]))//Check_str[i] is(0-9),(A-Z),(a-z)....
            post[++k]=str[i];
        else if(str[i]==')'){
            while((c=pop())!='(')post[++k]=c;}
        else{
            while(check(str[i])<=check(stack[top]))
                post[++k]=pop();
            push(str[i]);}
        i++;}
    while(top!=-1)post[++k]=pop();
    printf("%s",post);
}
int main(){
    char str[90];
    scanf("%s",str);
    infix_To_postfix(str);
}