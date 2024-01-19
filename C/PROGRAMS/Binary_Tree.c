#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node*left,*right;
}*root=NULL;
struct node*create(int x){
    struct node*root=(struct node*)malloc(sizeof(struct node));
    root->data = x;
    root->left = root->right = NULL;
    return root;
}
struct node*Insert(struct node *root ,int x){
    if(!root)root = create(x);
    else if(x<root->data)root->left = Insert(root->left,x);
    else if(x>root->data)root->right = Insert(root->right,x);
    return root;
}
bool Search(struct node*root,int x){
    if(!root)return 0;
    if(root->data==x)return true;
    else if(x<root->data)Search(root->left,x);
    else Search(root->right,x);
}
void Inorder(struct node *root) {
  if (!root)return;
    Inorder(root->left);
        printf("%d ", root->data);
    Inorder(root->right);
}
void Print_Nodes_in_Preorder(struct node *root){
  if (!root)return;
        printf("%d ", root->data);
    Print_Nodes_in_Preorder(root->left);
    Print_Nodes_in_Preorder(root->right);
}
void Print_Nodes_in_Postorder(struct node*root){
    if(!root)return;
    Print_Nodes_in_Postorder(root->left);
    Print_Nodes_in_Postorder(root->right);
        printf("%d ",root->data);
}
int min(struct node*root){
    if(!root->left)return root->data;
    return min(root->left);
}
int max(struct node*root){
    if(!root->right)return root->data;
    return max(root->right);
}
int HEIGHT_OF_BST(struct node*root){
    if(!root)return 0;
    int left_height=HEIGHT_OF_BST(root->left),right_height=HEIGHT_OF_BST(root->right);
    if(left_height>right_height)return left_height+1;
    else return right_height+1;
}
int SUM_OF_NODES(struct node*root){
    if(!root)return 0;
    return root->data+SUM_OF_NODES(root->left)+SUM_OF_NODES(root->right);
}
int leaf=0;
void SUM_OF_LEAF(struct node*root){
    if(!root)return;
    if(!root->left & !root->right)leaf+=root->data;
    SUM_OF_LEAF(root->left);SUM_OF_LEAF(root->right);
}
int main(){
    int x;
    while(scanf("%d",&x)==true)//N no_of_int inputs without Size......
        root = Insert(root,x);
    printf("In-Order\n");Inorder(root);
    printf("\n");
    printf("Pre-Order\n");Print_Nodes_in_Preorder(root);
    printf("\n");
    printf("Post-Order\n");Print_Nodes_in_Postorder(root);
    printf("\n\n");
    printf("Enter the value for Search\n");char str;//Get a char or string for getting another int...
    scanf("%c%d",&str,&x);
    if(Search(root,x))printf("The Element is FOUND\n");
    else printf("The Element is NOT-FOUND\n");
    printf("The Minimum Value is : %d\n",min(root));
    printf("The Maximum Value is : %d\n",max(root));
    printf("Sum of All Nodes  : %d\n",SUM_OF_NODES(root));SUM_OF_LEAF(root);
    printf("Sum of All Leaf Nodes  : %d\n",leaf);
    printf("The Height of the Tree is : %d\n\n",HEIGHT_OF_BST(root));
}
/*              ---EXPLAINATION---

        (_ROOT_)--------25-------
                 /              \
                15               50
              /    \            /   \
            10      22         35    70
           /  \     /  \      / \    / \
          04   12  18  24   31  44  66  90 (_LEAF_)
        
Refer_Link : https://media.geeksforgeeks.org/wp-content/cdn-uploads/Preorder-from-Inorder-and-Postorder-traversals.jpg
        -------------------
*/