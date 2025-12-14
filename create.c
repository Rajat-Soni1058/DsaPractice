#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node *next;
};

struct node* create(int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;

}
 // print the linked list 
void printll(struct node *head ){
    struct node *ptr=head;
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    while(ptr!=head){
        printf ("%d\n",ptr->data);
        ptr=ptr->next;

    }
}

// finding the' length of linked list 
int length(struct node * head){
    struct node*ptr=head;
 ptr = ptr->next;
 int i=1;
 while (ptr!=head){
    i++;
    ptr= ptr ->next;
 }
 return i;
}

// insertion at the beg 
struct node * insertatbeg(struct node *head,int data){
struct node * ptr=(struct node *)malloc(sizeof(struct node ));
ptr->data=data;
ptr->next=head;
struct node *temp=head->next; // for traversing 

while (temp->next!=head){
    temp=temp->next;
}

temp->next= ptr;
head=ptr;
return head;
}

// insert at the end 
void insertatend(struct node * head, int data){
   struct node * temp=(struct node *)malloc(sizeof(struct node ));
temp->data=data;
struct node*ptr = head->next;
while (ptr->next!=head){
    ptr= ptr->next;
}
ptr->next= temp;
temp->next=head;

}

// sorting the given linked list 
// void sorting(struct node * head){
   
//    struct node *current;
//    struct node*temp= head;
//    do {
//     current=temp->next;
//     while (current !=head ){
//         if ( current ->data < temp->data){
//             int k= temp->data;
//             temp->data= current ->data;
//             current ->data= k;
//         }
//         current = current ->next;

//     }
//     temp=temp->next;

//    }while ( temp!=head);
// }

//sorting the singly ciercular linked list more understandable 

void sorting (struct node*head){
    struct node*fixed=head;
    struct node*move;
    do{
        move=fixed->next;
        while(move!=head){
            if(fixed->data > move->data){
                int temp=fixed->data;
                fixed->data= move->data;
                move->data= temp;
            }
            move=move->next;
        }

fixed=fixed->next;
    }while(fixed!=head);
}

// count even and odd element 
void evenodd (struct node *head){
    struct node*ptr=head;
    int even = 0;
    int odd = 0;

    do {
        if(ptr->data %2==0){
            even++;
        }
        else odd++;
        ptr=ptr->next;
    }while (ptr!=head);

    printf (" number of even element are %d and number of odd are %d\n",even, odd );

}
// finding the duplicate element 
int duplicate(struct node*head){
    struct node*fixed=head;
    struct node*move;
    do{
        move=fixed->next;
        while(move!=head){
            if(fixed->data==move->data) return fixed->data;
            move=move->next;
        }
        fixed=fixed->next;
    }while(fixed!=NULL);
    return -1;
}

int main(){
    struct node *head=NULL;
    struct node *current =NULL;

printf ("enter the length of the linked list ");
int len;
scanf("%d",&len);
for (int i=0;i<len;i++){
    int data;
    printf ("enter the data of the %d index\n",i);
    scanf("%d",&data);
    if (head==NULL){
        head=create(data);
        current =head;

    }
    else{
        current ->next=create(data);
        current = current->next;
    }
}
current->next=head;

printf("element of the linked list are \n");
printll(head);
printf ("length of the linked list is %d \n", length(head));
//head=insertatbeg(head,55);
 printll(head);
// insertatend(head,67);
// printll(head);
 //sorting(head);
 //printll(head);
//evenodd(head);
int n= duplicate(head);
printf("\n%d\n",n);
}