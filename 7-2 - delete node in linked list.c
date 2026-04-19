#include <stdio.h>
#include <stdlib.h>
//Creating a node structure
struct node{
  int data;
  struct node *next;
};

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
//Deletion from begining
struct node* delbeg(struct node *head){
    struct node *temp;
    if (head==NULL){
        return NULL;
    }
    temp=head;
    head=head->next;
    free(temp);
    return head;
} 

//Deletion from middle
struct node* delmid(struct node *head){
    if(head==NULL||head->next==NULL){
        free(head);
        return NULL;
    }
    struct node *slow=head, *fast=head,*prev=NULL;
    while(fast!=NULL&&fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    prev->next=slow->next;
    free(slow);
    return head;
}

//deletion from end
struct node* delend(struct node *head){
    if(head==NULL||head->next==NULL){
        free(head);
        return NULL;
    }
    struct node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    
    return head;
}

int main(){
    struct node *head=NULL;
    
     // Create list: 10 -> 20 -> 30 -> 40 -> 50
    insert_beg(&head, 50);
    insert_beg(&head, 40);
    insert_beg(&head, 30);
    insert_beg(&head, 20);
    insert_beg(&head, 10);
    
    printf("Original List:\n");
    display(head);
    
    head=delbeg(head);
    printf("\nAfter deleting from beginning:\n");
    display(head);
    
    head = delmid(head);
    printf("\nAfter deleting from middle:\n");
    display(head);
    
    head = delend(head);
    printf("\nAfter deleting from end:\n");
    display(head);
}
