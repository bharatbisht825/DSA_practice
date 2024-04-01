#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// Node structure for the linked list
struct node {
    int data;
    struct node* next;
};

struct node* createNode(struct node *head,int Data);
void display(struct node *start);
void checklist(struct node *list1,struct node *list2);


struct node* createNode(struct node *head,int Data) {
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=Data;
    struct node *current = head;

    if(head==NULL){
        head=newnode;
        return head;
    }
    else{
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnode;
        return head;
    }

   
}

 void display(struct node *start){
        struct node *current;
        current=start;
        while(current!=NULL){
            printf("%d",current->data);
            current=current->next;
        }
    }

void checklist(struct node *list1,struct node *list2)
{
    struct node *current1=list1, *current2=list2;
    while (current1->next!=NULL && current2->next!=NULL)
    {
        if( (current1->data)!=(current2->data))
        {
            printf("not same");
           break;
        }
        current1=current1->next;
        current2=current2->next;
        

    }
    printf("same");
           
}


void main(){
    struct node *node1 =NULL,*node2=NULL;

    
    node1 = createNode(node1, 6);
    node1 = createNode(node1, 6);
   
    

    // Creating and populating the second linked list
    node2 = createNode(node2, 6);
    node2 = createNode(node2, 6);
   
    display(node1);
    display(node2);

    checklist(node1,node2);
}
