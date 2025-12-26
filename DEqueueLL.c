#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
struct dequeue{
    int data;
    struct dequeue* next;
    struct dequeue *prev;
};
struct dequeue*f=NULL;
struct dequeue*r=NULL;

void enqueuefront(int data){
    struct dequeue*newnode = (struct deqeue*)malloc(sizeof(struct dequeue));
    if(newnode==NULL) {
        printf("dequeue is full \n");
        return ;
    }
    if(f==NULL&&r==NULL){
        f=newnode;
        r=newnode;
        f->data=data;
        f->next=NULL;
        f->prev=NULL;

    }
    else{
        newnode->next=f;
        f->prev=newnode;
        f=newnode;
        f->data=data;
        f->prev=NULL;
    }

}
void enqueueRear(int data){
    struct dequeue*newnode = (struct deqeue*)malloc(sizeof(struct dequeue));
    if(newnode==NULL) {
        printf("dequeue is full \n");
        return ;
    }
    if(f==NULL&&r==NULL){
        f=newnode;
        r=newnode;
        r->data=data;
        r->next=NULL;
        r->prev=NULL;
    }
    else{
        r->next=newnode;
        newnode ->prev=r;
        r=newnode;
        r->data=data;
        r->next=NULL;
    }   
}

void deleteatfront(){
    if(f==NULL && r==NULL){
        printf("dequeue is empty \n");
        return ;
    }
    else if(r==f){
        r=NULL;
        f=NULL;

    }
    else{
        struct dequeue *ptr= f;
        f=f->next;
        f->prev=NULL;
        free(ptr);
    }
}
void deleteatrear(){
    if(f==NULL && r==NULL){
        printf("dequeue is empty \n");
        return ;
    }
    else if(r==f){
        r=NULL;
        f=NULL;

    }
    else{
        struct dequeue*ptr=r;
        r=r->prev;
        r->next=NULL;
        free(ptr);

    }
}

void display(){
    if(f==NULL && r==NULL){
        printf("dequeue is empty \n");
        return ;
    }

    struct dequeue *ptr=f;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}