#include<stdio.h>
#include<stdlib.h>
struct dequeue{
    int size;
    int f;
    int r;
    int *arr;
};

// inserting through front 
void enqueuefront(struct dequeue *dq,int data){
    if((dq->r+1)%dq->size==dq->f){
        printf("queue is full\n");
    }
    else if( (dq->r)==-1 &&dq->f==-1){
        dq->f=dq->r=0;
        dq->arr[dq->f]=data;

    }
    else {
        dq->f=(dq->f-1+ dq->size)%(dq->size);
        dq->arr[dq->f]=data;
    }

}

// inserting through rear 
void enqueuerear(struct dequeue *dq,int data){
    if((dq->r+1)%dq->size==dq->f){
        printf("queue is full\n");
    }
    else if (dq->r==-1&&dq->f==-1){
        dq->r=dq->f=0;
        dq->arr[dq->r]=data;
    }
    
    else{
        dq->r=(dq->r+1)%dq->size;
        dq->arr[dq->r]=data;

    }
}
// deletion from front 
void  deleteFront(struct dequeue *dq) {
    if(dq->f==-1&&dq->r==-1){
        printf("the queue is empty \n");
    }
    int value = dq->arr[dq->f];
    if (dq->f == dq->r) {
      dq->f = dq->r = -1;
    } else {
        dq->f = (dq->f + 1) % dq->size;
    }
    
    printf("Deleted %d from front\n", value);
    
}
// deletion from the rear 
void  deleteRear(struct dequeue *dq) {
    if(dq->f==-1&&dq->r==-1){
        printf("the queue is empty \n");
    }
    int value = dq->arr[dq->r]; 
    if (dq->f == dq->r) {
        dq->f = dq->r = -1;
    } else {
        dq->r = (dq->r - 1 + dq->size) % dq->size;
    } 
    printf("Deleted %d from rear\n", value);
}

// dispaly
void display(struct dequeue *dq){
    int n=dq->f;
    while(n!=dq->r){
        printf("%d\n",dq->arr[n]);
        n=(n+1)%dq->size;
    }
    printf("%d\n",dq->arr[n]);
}
int main(){
    struct dequeue *dq;
    dq->size=6;
    dq->f=dq->r=-1;
    dq->arr=(int *) malloc (sizeof(int)*dq->size);
}