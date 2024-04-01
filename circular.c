#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head ,*tail ;
int nodecounter=0;
void addnodeatend(int Data);
void display();
void addatafterend(int Data);
void addatbeforeend(int Data);
void insertatpointafter(int Data,int point);

void main(){
    addnodeatend(5);
    addnodeatend(6);
    addnodeatend(10);
    // addnodeatend(60);
    // addnodeatend(58);
    // addnodeatend(95);
    // addnodeatend(64);
    // addnodeatend(60);
    display();
    insertatpointafter(82,2x);
    printf("\n");
    display();

}
void addnodeatend(int Data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=Data;
    newnode->next=NULL;
    nodecounter++;

    if(head==NULL){
        head=tail=newnode;
        newnode->next=head;
    }
    else{
        newnode->next=head;
        tail->next=newnode;
        tail=newnode;
    }

}
void display(){
    struct node *current;
    current=head;
    do{
        printf("%d ->",current->data);
        current=current->next;
    }while(current!=head);
    printf("%d",head->data);
    // printf(" %d",nodecounter);
    // printf("%d",head->data);
    // printf(" %d",tail->data);
}
void addatafterend(int Data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=Data;
    newnode->next=NULL;
    nodecounter++;
    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
} 

void addatbeforeend(int Data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=Data;
    newnode->next=NULL;
    nodecounter++;

    newnode->next=head;
    tail->next=newnode;
    tail=newnode;
}

void insertatpointafter(int Data,int point){
    struct node *newnode ,*current=head;
    int end=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=Data;
    newnode->next=NULL;
    nodecounter++;

    if(point==1){
        newnode->next=head->next;
        head->next=newnode;
       
    }
    else if (point==nodecounter)
    {
       void addatafterend(int Data);
    }
    else
    {
        while (end!=point)
        {
            current=current->next;
            end++;
        }
            newnode->next=current->next;
    current->next=newnode;
        
    }




}