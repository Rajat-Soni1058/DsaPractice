#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// implementation of stack using the array 
struct stack {
    int size;
    int top;
    int *arr;
};
// checking stack is full or not 
int isfull(struct stack*st){
    if (st->top==st->size-1){
        return 1;
    }
    else return 0;
}
// checking stack is empty or not 
int isempty (struct stack *st){
    if (st->top==-1 ){
        return 1;
    }
    else{
        return 0;
    }
}
// insertion of the data in stack 
void push(struct stack *st,int data){
    if (isfull(st)){
        printf ("cant push stack is full \n");
        return;
    }
    else{
   st->top++;
   st->arr[st->top]= data; 
}
}
// deletion in the manner of LIFO
int  pop(struct stack *st){
    if(isempty(st)){
        printf("stack is under flow\n ");
    }
    else {
    int n= st->arr[st->top];
    st->top--;
    return n;
}
}
// traversing the stack 
void display (struct stack *st){
    int n=st->top;
    printf("the element of stack from top to bottom are \n");
    while (n!=-1){
        printf ("%d\n",st->arr[n]);
        n--;
    }
}
// searching of the key element 
void searching (struct stack *st,int key){
    int m=st->top;
    int check=0;
    while (m!=-1){
    if (key==st->arr[m]){
        printf ("the key element %d is present in stack at %d position from the top\n",key,m);
        check=1;
    }
    m--;
    }
    if (check==0){
        printf("the key element is not present\n ");
    }
}
// identifying the largest and the smallest present in the stack 
void largestandSmallest(struct stack *st){
    int min=INT_MAX;
    int max= INT_MIN;
    int n= st->top;
    while (n!=-1){
        if (st->arr[n]<min){
            min=st->arr[n];
        }
        if(st->arr[n]>max){
            max=st->arr[n];
        }
        n--;
    }
    printf ("the max element is %d and min element is %d in the stack \n", max,min);

}

int main (){
    struct stack *st;
    st->size=50;
    st->top=-1;
    st->arr=(int*) malloc(st->size * sizeof(int));
push(st,55);
push(st,56);
push(st,57);
push(st,58);
push(st,59);
push(st,60);
display(st);
// int n=pop(st);
// display(st);
searching(st,678);
largestandSmallest(st);
}