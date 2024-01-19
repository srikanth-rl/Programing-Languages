#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int val;
    struct ListNode*next;
}*head=NULL,*ptr=NULL;
struct ListNode*create(int x){
    struct ListNode*Node = (struct ListNode*)malloc(sizeof(struct ListNode));
    Node->val = x;Node->next=NULL;
    return Node;
}
void insert(int x){
    struct ListNode*node=create(x);
    if(!head)
        head = ptr = node;
    else{
        ptr->next = node;
        ptr = node;}
}
struct ListNode*ReverseList(){
    struct ListNode*Next,*head2=NULL,*current=head;
    while(current){
        Next = current->next;
        current->next = head2;
        head2 = current;
        current = Next;
    }return head2;
}
void printList(){
    struct ListNode*current = head;
    while(current){
        printf("%d ",current->val);current = current->next;
    }printf("\n");
}
int main(){
    for(int i=1;i<6;i++)insert(i);
    printList();
    head = ReverseList();
    printList();
}