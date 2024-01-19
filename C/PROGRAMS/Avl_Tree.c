/*Insertion and height At ----> O(logn) in all cases O(n) for Search in worst cases*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int key,height;
    struct node*left,*right;
}*root = NULL;
struct node*newNode(int value){
    struct node*Node = (struct node*)malloc(sizeof(struct node));
    Node->key = value;
    Node->left = Node->right = NULL;
    Node->height = 1;
    return Node;
}
int max(int a,int b){
    return (a > b) ? a : b;
}
int height(struct node*Node){
    if(!Node)return 0;
    else return Node->height;
}
int getBalance(struct node*root){
    if(!root)return 0;
    else return height(root->left) - height(root->right);
}
struct node*LEFT_ROTATE(struct node*x){
    struct node*y = x->right,*z = y->left;
    x->right = z;
    y->left = x;
    x->height = max(height(x->left),height(x->right)) + 1;
    y->height = max(height(y->left),height(y->right)) + 1;
    return y;
}
struct node*RIGHT_ROTATE(struct node*x){
    struct node*y = x->left,*z = y->right;
    x->left = z;
    y->right = x;
    x->height = max(height(x->left),height(x->right)) + 1;
    y->height = max(height(y->left),height(y->right)) + 1;
    return y;
}
struct node*INSERT_AVL(struct node*root,int x){
    if(!root)return newNode(x);
    if(x < root->key)       root->left = INSERT_AVL(root->left,x);
    else if(x > root->key)  root->right = INSERT_AVL(root->right,x);
    root->height = max(height(root->left),height(root->right)) + 1;
        int balance = getBalance(root);
    if(balance > 1  && x < root->left->key)    return RIGHT_ROTATE(root);
    else if(balance < -1 && x > root->right->key)   return LEFT_ROTATE(root);
    else if(balance > 1  && x > root->left->key){
        root->left = LEFT_ROTATE(root->left);
        return RIGHT_ROTATE(root);}
    else if(balance < -1 && x < root->right->key){
        root->right = RIGHT_ROTATE(root->right);
        return LEFT_ROTATE(root);}
    return root;
}
void PRE_ORDER(struct node*root){
    if(!root)return;
        printf("%d ",root->key);
    PRE_ORDER(root->left);
    PRE_ORDER(root->right);
}
bool search(struct node*root,int x){
    if(root->key==x)return true;
    if(!root)return false;
    else if(root->key < x)search(root->right,x);
    else if(root->key > x)search(root->left,x);
}
int main(){
    int x;
    while(scanf("%d",&x)==1)
        root = INSERT_AVL(root,x);
    printf("Pre-Order\n");PRE_ORDER(root);
    printf("\nEnter the value for Search\n");char temp;
    scanf("%c%d",&temp,&x);
    if(search(root,x))printf("\nThe Element %d is Found",x);
    else printf("\nThe Element %d is Not Found",x);
}/* Refer_link : https://media.geeksforgeeks.org/wp-content/uploads/AVL-Insertion-1.jpg */