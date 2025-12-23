#include<stdio.h>
#include<stdlib.h>
// using array  
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

// is full 
int  isfull(struct queue*q){
    if(q->r==q->size-1){
        return 1;
    }
    else return 0;
}

// is empty 
int isempty(struct queue *q){
    if(q->f==-1&&q->r==-1){
        return 1;
    }
    else{
        return 0;
    }
}

// inserting of the element 
void enqueue(struct queue *q,int data){
    if(q->r==q->size-1){
        printf("queue is overflowed\n");
    }
    else if (q->f==-1&&q->r==-1){
        q->f++;
        q->r++;
        q->arr[q->r]=data;
    }
    else{
        q->r++;
        q->arr[q->r]=data;
    }
}

// deletion of the element 
void dequeue (struct queue *q){
    if(q->f==-1&& q->r==-1){
        printf("qeueu is empty\n");
    }
    else if(q->f==q->r){
        q->f=q->r=-1;
    }
    else{
        q->f++;
    }
}

// printing first element 
void peek(struct queue *q ){
    if(q->f==-1&& q->r==-1){
        printf("queue is empty\n");
    }
    else{
        printf("the first element is %d\n",q->arr[q->f]);
    }
}

// display of the element 
void display(struct queue *q){
    if(q->f==-1&& q->r==-1){
        printf("queue is empty\n");
    }
    else{
        for(int i = q->f; i<=(q->r);i++){
            printf("%d\n",q->arr[i]);
        }
    }
}

int main (){
    struct queue *q;
    q->size=5;
    q->f=q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
     enqueue(q,56);
     enqueue(q,53);
     enqueue(q,58);
     enqueue(q,223);
     enqueue(q,50);
     display(q);

}