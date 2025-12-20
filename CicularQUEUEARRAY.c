#include <stdio.h>
#include<stdlib.h>
struct cqueue {
    int size;
    int f;
    int r;
    int *arr;
}; 

// inserting the element 
void enqueue(struct cqueue*q,int data){
    if((q->r+1)%(q->size)==q->f){
        printf("queue is full\n");

    }
    else if(q->r==-1&&q->f==-1){
        q->r=q->f=0;
        q->arr[q->r]=data;
    }
    else{
        q->r=(q->r+1)%(q->size);
        q->arr[q->r]=data;
    }
}

// deletion of the element 
void dequeue(struct cqueue *q){
    if(q->r==-1&&q->f==-1){
        printf("queue is empty\n");
    }
    else if(q->f==q->r){
        q->f=q->r=-1;
    }
    else {
        printf("%d is the deleted element\n",q->arr[q->f]);
        q->f=(q->f+1)%(q->size);
    }
}

//display of the element 
void display (struct cqueue*q){
    printf("the element are - \n");
    int n=q->f;
    while (n!=q->r){
        printf("%d\n",q->arr[n]);
        n=(n+1)%(q->size);
    }
    printf("%d\n",q->arr[n]);
} 

int main (){
    struct cqueue*cq;
    cq->size=5;
    cq->f=cq->r=-1;
    cq->arr=(int *)malloc (cq->size*sizeof(int));
    enqueue(cq,98);
    enqueue(cq,9);
    enqueue(cq,8);
    enqueue(cq,45);
    enqueue(cq,78);
    display(cq);
    //dequeue(cq);
    //enqueue(cq,786);
    //display(cq);
}