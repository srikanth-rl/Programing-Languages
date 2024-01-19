// Day-4_4-Q
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*add;
};
struct node*head;
struct node*newnode(int x){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->add=NULL;
    return temp;
}
void insert_left(int x){
    struct node*temp=newnode(x);
    temp->add=head;
    head=temp;
}
void insert_right(int x){
    struct node*temp=newnode(x);
    if(head==NULL)
        head=temp;
    else{
        struct node*temp2=head;
        while(temp2->add!=NULL)
            temp2=temp2->add;
        temp2->add=temp;
    }
}
void insert_Position(int pos,int x){
    struct node*temp=newnode(x);
    if(pos==1){
        temp->add=head;
        head=temp;}
    else{
        struct node*temp2=head;
        for(int i=1;i<pos-1;i++)
            temp2=temp2->add;
        temp->add=temp2->add;
        temp2->add=temp;
    }
}
void Print(struct node *temp){
    //struct node*temp=head;
    if(temp==NULL)return;
    Print(temp->add);
    printf("%d ",temp->data);
}
int main(){
    head=NULL;
    insert_right(1);
    insert_right(2);
    insert_right(3);
    insert_right(4);
    insert_right(5);
    Print(head);
}