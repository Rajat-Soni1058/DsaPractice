#include<stdio.h>
#include<stdlib.h>
struct cqueue{
    int data;
    struct cqueue*next;
};
struct cqueue*f=NULL;
struct cqueue*r=NULL;

//  inserting of the element 
void enqueue(int data){
struct cqueue*newnode=(struct cqueue*)malloc(sizeof(struct cqueue));
if(newnode==NULL){
    printf("queue is full\n");

}
else if (f==NULL&&r==NULL){
    f=newnode;
    r=newnode;
    r->data=data;
    r->next=f;
}
else{
  r->next=newnode;
  r=newnode;
  r->data=data;
r->next=f;
}
}

// deletion of the element 
void dequeue(){
    if(f==NULL){
        printf("queue is empty\n ");
    }
    else if(f==r){
        f=NULL;
        r=NULL;
    }
    else{
        struct cqueue *n=f;
        f=f->next;
        free(n);
        r->next=f;
    }
}

// display
void display(){
    struct cqueue *temp=f;
    do{
        printf("%d\n",temp->data);
        temp=temp->next;
    }while(temp!=f);
}

int main(){
   enqueue(45);
   enqueue(46);
   enqueue(47);
   enqueue(48);
   enqueue(49);
   display(); 
}