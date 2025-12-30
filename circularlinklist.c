#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next ;

};
void display(struct node*head){
struct node*ptr=head;
    do {
printf("%d\n",head->data);
head=head->next;
    }while(head!=ptr);
}
struct node * insertatbeg(struct node *head,int data){
    struct node *strt=head;
    struct node *ptr= (struct node *)malloc(sizeof (struct node ));
    ptr->data=data;
    while (strt->next!=head){
        strt=strt->next;
    }
    strt->next=ptr;
ptr->next=head;
head=ptr;
return head;
}




int main (){
struct node*head=(struct node*) malloc(sizeof(struct node));
struct node*b=(struct node*) malloc(sizeof(struct node));
struct node*c=(struct node*) malloc(sizeof(struct node));
struct node*d=(struct node*) malloc(sizeof(struct node));
struct node*e=(struct node*) malloc(sizeof(struct node));
head->data=10;
b->data=20;
c->data=30;
d->data=40;
e->data=66;
head->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=head;
display(head);
 head=insertatbeg(head,23);
 printf ("after insertion at begining \n");
 display(head);
}