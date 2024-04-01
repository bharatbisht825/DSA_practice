#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// Node structure for the linked list
struct node {
    int coefficient;
    int value;
    struct node* next;
};

struct node* createNode(struct node *head,int coef,int val);
void display(struct node *start);
//void checklist(struct node *list1,struct node *list2);


struct node* createNode(struct node *head,int coef,int val) {
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coefficient=coef;
    newnode->value=val;
    newnode->next=NULL;
    
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
            printf("%dx%d ",current->coefficient,current->value);
            current=current->next;
        }
    }

// void checklist(struct node *list1,struct node *list2)
// {
//     struct node *current1=list1, *current2=list2;
//     while (current1->next!=NULL && current2->next!=NULL)
//     {
//         if( (current1->data)!=(current2->data))
//         {
//             printf("not same");
//            break;
//         }
//         current1=current1->next;
//         current2=current2->next;
        

//     }
//     printf("same");
           
// }



void add(struct node*list1,struct node* list2){
    struct node *current1,*current2,*new=NULL;
    current1=list1;
    current2=list2;
    while(current1!=NULL && current2!=NULL){
        if(current1->value==current2->value){
           new= createNode(new,(current1->coefficient+current2->coefficient),current1->value);
           current1=current1->next;
           current2=current2->next;
        }
        else if (current1->value>current2->value){
                new=createNode(new,current1->coefficient,current1->value);
                current1=current1->next;
        }
        else if(current2->value>current1->value){
            new=createNode(new,current2->coefficient,current2->value);
            current2=current2->next;
        }

        
    }

    if(current1!=NULL){
        new=createNode(new,current1->coefficient,current1->value);
        current1=current1->next;
    }
    if(current2!=NULL){
        new=createNode(new,current2->coefficient,current2->value);
        current2=current2->next;
    }

    display(new);
}


void main(){
    struct node *node1 =NULL,*node2=NULL;

    
    node2 = createNode(node2, 6, 8);
    node2 = createNode(node2, 2,5);
    node2=createNode(node2,6,3);
 node2 = createNode(node2, 6, 2);
    node2 = createNode(node2, 2,1);
   
  

    // Creating and populating the second linked list
    node1 = createNode(node1, 7,8);
    node1 = createNode(node1, 2,5);
    node1 = createNode(node1, 5,0);
   
   
    display(node1);
      printf("\n");
    display(node2);

    printf("\n");
    add(node1,node2);

    // checklist(node1,node2);
}
