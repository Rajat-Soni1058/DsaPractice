#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
// creating the double linked list 
struct node* createll(int data){
    struct node * newnode = (struct node *)malloc(sizeof(struct node ));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
// printing the linked list 
void printll(struct node * head){
    while (head!=NULL){
        printf ("%d\n",head->data);
        head= head->next;
    }
}
// length of the linked list 
int lengthofll(struct node *head){
    int i=0;
    while (head!=NULL){
        head=head->next ;
        i++;
    }
    return i;
}
// finding the duplicate element 
int duplicate(struct node*head){
    struct node *temp=head;

    while (temp->next!=NULL){
        struct node *ptr=temp;
        struct node*pt=ptr->next;
        while(pt!=NULL){
if (ptr->data==pt->data){
    return pt->data;
    
}
        pt=pt->next;
        }
        
        temp= temp->next;
    }

}
// better code for finding duplicate 

/*int duplicate(struct node *head ){
    struct node *fixed=head;
    struct node *move;
    while (fixed!=NULL){
        move=fixed->next;
        while(move!=NULL){
            if(fixed->data==move->data){
                return fixed->data;
            }
            move=move->next;
        }
        fixed=fixed->next;
    }
}*/


// counting the even odd number 
void evenodd(struct node *head){
    int even=0;
    int odd =0;
    while (head!=NULL){
        if (head->data %2==0){
            even++;

        }
        else{ odd++;}
        head=head->next;
    }
    printf("the total no of even element are %d and the odd are %d \n", even , odd );
        
}

int main (){
printf("enter the length of the linked list ");
int len;
scanf("%d",&len);
struct node*head=NULL;
struct node*current=NULL;


for (int i=0;i<len;i++){
int data;
printf ("enter the data of the %d index:\n",i);
scanf("%d",&data);

if (head==NULL){
    head=createll(data);
    current=head;
}
else{
    struct node*temp=current;
    current->next = createll(data);
    current=current->next;
    current->prev=temp;
   
}

}
printf ("element of the ll are \n");
printll(head);
// printf ("\nduplicate element is %d\n",duplicate(head));
evenodd(head);
}