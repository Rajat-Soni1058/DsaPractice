#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next ;
};

// creating the node with input from user 
 struct node*createnode(int data){
    struct node * newnode= (struct node*)malloc(sizeof(struct node))
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
//finding the length of linked list 
int  length(struct node *head){
    int i=0;
    while (head!=NULL){
        head=head->next;
        i++;
    }
    return i;
}
//sorting of the linked list 

 void sortinglinkedlist(struct node*head){
    struct node*ptr = head;
while(ptr!=NULL){ 

    struct node*start=ptr;
    struct node*min=start->next;

    while (min!=NULL){

        if (min->data <start-> data){
           int temp=start ->data;
           start->data=min->data;
           min->data=temp;
        }

        min=min->next;
    }
ptr=start->next;

}

 }
 // another code for sorting and i think better than above 

 /*void sortingll(struct node * head){
 
    struct node*fixed=head;
    struct node*move;

    while (fixed!=NULL){
        move=fixed->next;

        while(move!=NULL){
            if (fixed->data > move->data){
                int temp=fixed->data;
                fixed->data=move ->data;
                move->data= temp;
            }
            move=move->next;
        }

        fixed=fixed->next;
    }

 }      */

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
 sortinglinkedlist(head);
 printll(head);
}