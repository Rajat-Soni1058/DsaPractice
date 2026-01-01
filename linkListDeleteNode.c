#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next ;

};
void display(struct node*head){
    while (head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}
struct node* deleteathead(struct node*head){
    struct node*ptr= head;
    head=head->next;
    free(ptr);
    printf("\n");
    return head;
}
void deleteatend(struct node*head){
    
    while (head->next->next!=NULL ){
        head=head->next ;
    }
    struct node *ptr=head->next;
    head ->next=NULL;
    free(ptr);

}
void deleteatidx(struct node*head,int idx ){
    int i=0;
    while (i<idx-1){
head=head->next;
i++;
    }
    struct node*ptr=head->next;
    head->next=head->next->next;
    free(ptr);
}
void deleteatgiven(struct node *head,struct node* value){
    while(head->next!=value){
        head=head->next;
    }
    head->next=value->next;
    free(value);
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
e->next=NULL;
display(head);
 // head=deleteathead(head);
// printf("after deletion at head\n");
 //display(head);
//  deleteatend(head);
//  printf("after deletion at tail\n");
//   display(head);
  //printf("after deletion at index\n");
   //deleteatidx(head,3 );
 //  display(head);
   deleteatgiven(head,c);
   printf("after deletion at index\n");
    display(head);
}