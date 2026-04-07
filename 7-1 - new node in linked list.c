#include <stdio.h>
#include <stdlib.h>
// Creating a structure for nodes
struct node{
    int data;
    struct node *next;
};


// display
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
//inserting at front
void insert_beg(struct node **head, int data){
    struct node *Newnode=malloc(sizeof(struct node));
    
    Newnode->data=data;
    Newnode->next=*head;
    *head=Newnode;
}

//inserting after a given node
void insert_given(int pos,struct node **head, int data){
    struct node *temp=*head;
    struct node *Newnode=malloc(sizeof(struct node));
    for(int i=1;i<pos&&temp!=NULL;i++){
        temp=temp->next;
    }
    Newnode->next=temp->next;
    temp->next=Newnode;
    Newnode->data=data;
}
//inserting at last 
void insert_end(struct node **head,int data ){
    struct node *temp=*head;
    struct node *Newnode=malloc(sizeof(struct node));
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Newnode->data=data;
    Newnode->next=NULL;
    temp->next=Newnode;
    
}

int main() {
    struct node* head = NULL;

    insert_beg(&head, 10);
    insert_beg(&head, 5);
    
    insert_end(&head, 20);
    insert_end(&head, 30);

    insert_given(2,&head, 15); // after second node

    display(head);

    return 0;
}
