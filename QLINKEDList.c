#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue *next;
};

struct queue *f = NULL;
struct queue *r = NULL;

// inserting the element , happen with using r
void enqueue(int data){
    struct queue *newnode = (struct queue*)malloc(sizeof(struct queue));
    if (newnode == NULL)
    {
        printf("queue is full \n");
    }
    else if (f == NULL && r == NULL)
    {
        f = newnode;
        r = newnode;
        r->data = data;
        r->next = NULL;
    }
    else
    {
        r->next = newnode;
        r = newnode;
        r->data = data;
        r->next = NULL;
    }
}

// deletion of the node, happening in the manner of first in first out
void dequeue()
{
    
    if (f == NULL)
    {
        printf("queue is empty \n");
      
    }
    else if(f==r) {
        f=NULL;
        r=NULL;
    }
    else
    {
        struct queue *ptr = f;
        printf("deleted element is %d\n", f->data);
        f = f->next;
        free(ptr);
      
    }
}

// display function 
void display(){
    if (f == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        struct queue *ptr = f;
        printf("the element are \n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

// peek 
void peek (){
    if(f==NULL){
        printf("queue is empty \n");
    }
    else{
        printf("the first element of  queue is %d\n ",f->data);
    }
}

int main()
{
    
    enqueue(56);
    enqueue(57);
    enqueue(58);
    enqueue(59);
    enqueue(60);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
}