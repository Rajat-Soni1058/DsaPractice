#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};

// creating the double linked list 
struct node* createll(int data){
    struct node * newnode = (struct node *)malloc(sizeof(struct node ));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

// printing the linked list 
void printll(struct node * head){
    while (head!=NULL){
        printf ("%d\n",head->data);
        head= head->next;
    }
}

// length of the linked list 
int lengthofll(struct node *head){
    int i=0;
    while (head!=NULL){
        head=head->next ;
        i++;
    }
    return i;
}

// sorting of the double linked list 
void sortinascending(struct node *head){
    struct node *temp=head;

    while (temp->next!=NULL){
        struct node * min= temp;
        struct node *start = min->next;
while (start!=NULL){
    if (min->data > start->data){
int t=start->data;
start->data=min->data;
min->data=t;
    }
    start=start->next;
}

temp=temp->next;
    }
}
// sorting the element in descending order 
void sortindescending(struct node *head){
    struct node *temp=head;

    while (temp->next!=NULL){
        struct node * min= temp;
        struct node *start = min->next;
while (start!=NULL){
    if (min->data < start->data){
int t=start->data;
start->data=min->data;
min->data=t;
    }
    start=start->next;
}

temp=temp->next;
    }
}
int main (){
printf("enter the length of the linked list ");
int len;
scanf("%d",&len);
struct node*head=NULL;
struct node*current=NULL;


for (int i=0;i<len;i++){
int data;
printf ("enter the data of the %d index:\n",i);
scanf("%d",&data);

if (head==NULL){
    head=createll(data);
    current=head;
}
else{
    struct node*temp=current;
    current->next = createll(data);
    current=current->next;
    current->prev=temp;
   
}

}
printf ("element of the ll are \n");
printll(head);
printf ("after the sorting of the element\n ");
//  sortinascending(head);
//  printll(head);
 sortindescending(head);
 
}