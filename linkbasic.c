#include <stdio.h>
#include<stdlib.h>
 struct node {
    int data ;
    struct node* next ;
 };

 void display(struct node*ptr){ 

    while(ptr!=NULL){
        printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
 }
 struct node* insertatbeg(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next= head;
    head=ptr;
    return head;
 }  
void insertatindex(struct node* head, int data, int idx){
    struct node *ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
    int i=0;
    while(i<idx-1){
head=head->next;
    i++;}
ptr->next= head->next;
head->next=ptr;
}
void insertatend(struct node*head,int data){
    struct node* ptr= (struct node*)malloc(sizeof (struct node ));
    ptr->data=data;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next= ptr;
    ptr->next=NULL;
}
void insertaftnode(struct node *p,int data ){
    struct node*ptr = (struct node*) malloc(sizeof(struct node) );
ptr->data=data;
ptr->next=p->next;
p->next=ptr;

}
 int main(){
    struct node* head = (struct node*) malloc(sizeof(struct node));
head-> data = 20;
struct node* second = (struct node*) malloc(sizeof(struct node));
second-> data = 30;
struct node* third = (struct node*) malloc(sizeof(struct node));
third-> data = 40;
struct node* fourth = (struct node*) malloc(sizeof(struct node));
fourth-> data = 50;

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;
 display(head);
head=insertatbeg(head,80);
printf("after the insertioin at beg\n");
display(head);
printf("after the insertioin at beg\n");
head=insertatbeg(head,90);
display(head);
insertatindex(head,100, 3);
printf("after inseert at index\n");
display(head);
insertatend(head,160);
printf("after inseert at end\n");
display(head);
printf(" inseert after given node \n");
insertaftnode(third,600 );
display(head);
 }