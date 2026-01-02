#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
// creating the doubly circular linke list
struct node*createnewnode(int data){
    struct node *newnode= (struct node*)malloc (sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
return newnode;
}
// printing the DCLL
void display(struct node*head){
    printf("the element of the linked list are \n");
    struct node*ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr= ptr->next;
    }while(ptr!=head);
}
// inseert at begining 
struct node* insertatbeg(struct node*head,int data){
    
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    
    struct node*ptr= head->next;  // you can also use the head->prev->next=newnode ; without using the loop u can insert at beg 
    while(ptr->next!=head){  
ptr=ptr->next;
    }
    newnode->prev=ptr;
    ptr->next=newnode;
    head->prev=newnode;
return newnode;
}
// deletion at beginning 
struct node* deleteatbeg(struct node*head){
    struct node*ptr=head;
    while(ptr->next!=head){ // dont need loop you can do it by head->prev->next=head->next ;,head->next->prev=head->prev;
        ptr= ptr->next;
    }
    head=head->next;
    ptr->next=head;
    head->prev=ptr;
    return head;
}

// sorting 
void sorting (struct node*head){
    struct node*fixed=head;
    struct node*move;
    do{
        move=fixed->next;
        while(move!=head){
            if(fixed->data > move->data){
                int temp=fixed->data;
               fixed->data= move->data;
               move->data=temp;
            }
            move=move->next;
        }
        fixed=fixed->next;
    }while(fixed!=head);
}

// second largest and smallest element ,you can say imp code, always correct code for any case
void Slargestsmallest(struct node*head){
    struct node *move=head;
    int largestele=INT_MIN;
    int smallestele=INT_MAX;
int secondsmallest=INT_MAX;
    int secondlargest=INT_MIN;

    do{
        if(largestele < move->data) largestele=move->data;
        if(smallestele > move->data) smallestele= move->data;
        move=move->next;
    }while(move!=head);
    // move is now = head
    do{
        if(move->data > secondlargest && move ->data <largestele) secondlargest = move->data;
        move=move->next;

    }while(move!=head);
    // now move is head
    do{
        if(move->data < secondsmallest && move ->data > smallestele) secondsmallest= move->data;
        move=move->next;

    }while(move!=head);
    printf("%d is the secsmallest and %d is the seclargest element in DCLL\n ", secondsmallest,secondlargest);
}

int main(){
struct node*head=NULL;
struct node*current =NULL;
printf("enter the number of node ");
int n;
scanf("%d",&n);
printf("enter the data of node \n");
for (int i=0;i<n;i++){
    
    int data;
    printf("enter the data of %d index \n",i);
    scanf("%d",&data);
    
    if(head==NULL){
        head=createnewnode(data);
        current = head;
    }
    else{
        struct node*temp=current;
        current->next= createnewnode(data);
        current= current->next;
        current->prev=temp;

    }
    
}
current->next=head;
 head->prev=current;
display(head);
 //head=insertatbeg(head,56);
//display(head);
//head= deleteatbeg(head);
//display(head);
//sorting(head);
//display(head);
Slargestsmallest(head);
}