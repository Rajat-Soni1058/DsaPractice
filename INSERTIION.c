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
// insertion at the beg 
struct node * insertatbeg(struct node*head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    head->prev=ptr;
    ptr->next=head;
    ptr ->prev = NULL;
    return ptr;
}
// insert at the end
void insertatend(struct node * head,int data ){
         struct node * ptr=(struct node *)malloc(sizeof(struct node));
         ptr->data=data;   
         while (head->next!=NULL){
            head=head->next;
         } 
         head->next=ptr;
         ptr->prev=head;
         ptr->next=NULL;
}
// insert at the middle 
void insertatmid(struct node * head, int data ){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
         ptr->data=data;
          int l=lengthofll(head);
          int i=0;
          while (i<l/2-1){
            head= head->next;
            i++;
          }
          ptr->next = head->next;
          ptr->prev=head;
          
          head->next->prev=ptr;
          head-> next=ptr;
}

// insert at the given index
void insertatidx(struct node *head , int data , int idx){
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
         newnode->data=data;
              int i=0;
              while (i<idx-1){
                head= head->next ;
                i++;
              }
              newnode->next=head->next;
              newnode->prev=head;
head->next->prev=newnode;
head->next=newnode;
              
}

// after the given postion 
void insertafteridx(struct node *head , int data , int idx){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
         ptr->data=data;
              int i=0;
              while (i<idx){
                head= head->next ;
                i++;
              }
              ptr->next=head->next;
              ptr->prev=head;
head->next->prev=ptr;
head->next=ptr;
              
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
printf ("length of linked list is %d\n",lengthofll(head));
// head=insertatbeg(head,55);
// printll(head);
// insertatend(head,89 );
// printll(head);
// insertatmid (head,88);
// printll(head);
// insertatidx(head, 58,3);
// printll(head);
insertafteridx(head, 786,2);
printll(head);
}