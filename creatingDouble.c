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

int main (){
    
 struct node*head=NULL;
struct node*current=NULL;

printf("enter the length of the linked list ");
int len;
scanf("%d",&len);


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
printf ("length of linked list is %d",lengthofll(head));




}