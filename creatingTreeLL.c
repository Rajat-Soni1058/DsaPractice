 #include<stdio.h>
 #include<stdlib.h>
 struct node {
    int data ;
    struct node*left;
    struct node*right;

 };
 // Creating the binary tree 
 struct node * create( ){
    struct node *newnode = (struct node *)malloc (sizeof(struct node));
    int x;
    printf("enter the data for node otherwise -1 for no data \n");
    scanf("%d",&x);
    if(x==-1) return NULL;
    newnode->data=x;
    printf("enter the left child of the node \n");
    newnode->left=create( );
    printf("enter the right child of the node \n");
    newnode->right =create( );
    return newnode ;
 }
 // calculating height of tree 
 int height(struct node *root) {
    if (root == NULL) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
// calculating the total number of node 
int totalNodes(struct node *root) {
    if (root == NULL) return 0;
    return 1 + totalNodes(root->left) + totalNodes(root->right);
}
// total internal node or non leaf node 
int internalNodes(struct node *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return 0;
    return 1 + internalNodes(root->left) + internalNodes(root->right);
}
// total leaf node or external node 
int leafNodes(struct node *root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return leafNodes(root->left) + leafNodes(root->right);
}
// height of left sub tree 
int heightLST(struct node *root) {
    if (root == NULL || root->left == NULL) return 0;
    return height(root->left);
}
// level of right sub tree 
int levelRST(struct node *root) {
    if (root == NULL || root->right == NULL) return 0;
    return height(root->right);
}
 int main(){
    struct node*root=create();
    printf("Height of the tree: %d\n", height(root));
    printf("Total number of nodes: %d\n", totalNodes(root));
    printf("Number of internal nodes: %d\n", internalNodes(root));
    printf("Number of leaf nodes: %d\n", leafNodes(root));
    printf("Height of the left subtree: %d\n", heightLST(root));
    printf("Level of the right subtree: %d\n", levelRST(root));
 }