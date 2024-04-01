#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node*Next;
};
struct Node *head,*tail;
void display();
void addnode(int data);
void addnodeBefore(int Data);
void addnodeafterpoint(int Data,int point);
void addnodebeforepoint(int Data,int point);
int main(){
    addnode(5);
    addnode(6);
    addnode(10);
    addnode(60);
    addnode(58);
    addnode(95);
    addnode(64);
    addnode(60);
    display();
    // printf("\n");
    // addnodeBefore(500);
    // display();
    printf("\n");
    addnodeafterpoint(540,2);
    display();
    return 0;
    

}
void addnode(int Data){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=Data;
    newnode->Next=NULL;

    if(head==NULL){
            head=tail=newnode;
    }
    else{
        tail->Next=newnode;
        tail=newnode;
    }

}

void addnodeBefore(int Data){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=Data;
    newnode->Next=NULL;

    if(head==NULL){
            head=tail=newnode;
    }
    else{
        newnode->Next=head;
        head=newnode;
    }
}
void addnodeafterpoint(int Data,int point){
    struct Node *newnode;
    int end=0;
    int checkcurr;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=Data;
    newnode->Next=NULL;
    struct Node *current=head;

    if(head==NULL){
            head=tail=newnode;
    }
    else{
        while(end<=(point)){
            current=current->Next;
            end++;
            checkcurr=current->data;
        }
    newnode->Next=current->Next;
    current->Next=newnode;
    }
}
void addnodebeforepoint(int Data,int point){
    struct Node *newnode;
    int end=0;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=Data;
    newnode->Next=NULL;
    struct Node *current=head;

    if(head==NULL){
            head=tail=newnode;
    }
    else{
        while(end==(point-1)){
            current=current->Next;
            end++;
        }
    newnode->Next=current->Next;
    current->Next=newnode;
    }
}
void display(){
    struct Node*current;
    current=head;
    while(current!=NULL){
        printf("%d -> ",current->data);
        current=current->Next;
    }
}


