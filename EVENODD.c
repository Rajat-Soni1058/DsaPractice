#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next ;
};

// creating the node with input from user 
 struct node*createnode(int data){
    struct node * newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data= data;
    newnode->next= NULL;
    return newnode;
 }
 // printing the node 
void printll(struct node *head ){
    struct node *ptr=head;
    printf("the element of the linked list are \n");
    while(ptr!=NULL){
        printf ("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
// count even odd element 
void evenodd(struct node * head){
    struct node *temp=head;
    int counteven=0;
    int countodd=0;
    while(temp!=NULL){
        if ( (temp->data )%2==0){
            counteven++;
        }
        else countodd++;
        temp= temp->next;
    }
    printf ("number of even element is : %d and odd is :%d",counteven,countodd);
}
int main(){
    struct node* head=NULL;
    struct node* current = NULL;
printf ("enter the length of the linkedlist \n");
int len;
scanf("%d",&len);
for(int i=0;i<len;i++){
    int data;
printf("enter the data of the %d index element\n ",i );
scanf("%d",&data);
if (head==NULL){
    head=createnode(data);
    current = head;
}
else{
    current-> next=createnode(data);
    current = current ->next;
}
}
printll(head);
 evenodd(head);
}
