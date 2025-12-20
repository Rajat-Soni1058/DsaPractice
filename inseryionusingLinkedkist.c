#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct stack {
int data;
struct stack*next;

};

// push operation
struct stack* push(struct stack *top,int data){
    
    struct stack *newnode=(struct stack*)malloc(sizeof(struct stack));
    if(newnode==NULL){
     printf("stack is overflow\n");
     return top;
    }
    newnode->data=data;
    newnode->next=top;
    top=newnode;
    return top;
}

// poping the element in stack 
struct stack* pop(struct stack *top){
    if (top==NULL){
        printf("stack is empty \n");
        return top;
    }
    
    struct stack*n=top;
top= top->next;
    
    free(n);
    return top;
}

// display function
void display(struct stack *top){
    while(top!=NULL){
        printf("%d\n", top->data);
        top= top->next;
    }
}

// searching the key element 
void searching(struct stack * ptr, int key){
    int f=0;
    while (ptr!=NULL){
        if (ptr->data==key){
        printf("yes key element is present\n ");
        f=1;
        }
        ptr=ptr->next;
    }
    if(f==0){
printf("key element is not present\n ");
    }
}


// find the largest and the smallest element 
void largestsmallest(struct stack *ptr){
    int max=INT_MIN;
    int min= INT_MAX;
    while(ptr!=NULL){
        if(ptr->data<min){
            min= ptr->data;
        }
        if (ptr->data>max){
            max=ptr->data;
        }
        ptr=ptr->next;
    }
    printf("the smallest is %d and the largest element is %d\n ", min, max);
}

int main(){
struct stack *top=NULL;
top=push(top,56);//push and pop dono likhte samaye top equal me karna hoga,kyuki top se pop and push hoga taki time complexity 1 rahe.
top=push(top,57);
top=push(top,58);
top=push(top,59);
top=push(top,60);
top=push(top,5);
// top =pop(top);
display(top);
searching( top, 5);
largestsmallest(top);
}
