#include<stdio.h>
 #include<stdlib.h>
 struct node {
    int data ;
    struct node*left;
    struct node*right;

 };
 struct node * create( ){
    struct node *newnode = (struct node *)malloc (sizeof(struct node));
    int x;
    printf("enter the data for node otherwise -1\n");
    scanf("%d",&x);
    if(x==-1) return NULL;
    newnode->data=x;
    printf("enter the left child \n");
    newnode->left=create( );
    printf("enter the right child \n");
    newnode->right =create( );
    return newnode ;
 }
 // traversing using preorder 
 void preorder (struct node *root){
    if(root==NULL){
        return ;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
 }
 // traversing using inorder 
 void inorder (struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
 }
 // traversing using postorder 
 void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
 }
 int main(){
    struct node*root=create();
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);

 }