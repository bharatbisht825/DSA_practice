#include <stdio.h>
#include <stdlib.h>

struct quee
{
    struct tree *address;
    struct quee *next;
};

struct quee *first=NULL,*end=NULL;
struct tree
{
   struct tree *left;
   int data ;
   struct tree *right;
};
void createquee(struct tree *addr);
int pop();
void display();
void createfirstNode();
void createquee(struct tree *addr)
{
    struct quee *newval;
    newval=(struct quee*)malloc(sizeof(struct quee));
    newval->address=addr;
    newval->next=NULL;

    if(first==NULL){
        first=newval;
        end=newval;
    }
    else{
        newval->next=end;
        end=newval;
    }
}

int pop(){
    struct quee *current;
    current=end;
    if(first==NULL){
        return-1;
    }

    else if(current==first){
        first=NULL;
        current=NULL;
        return current->address;
    }


    else{
    while(current->next!=first){
        current=current->next;
        }

    first=current;
    first->next=NULL;
    return current->address;
    }
}
void createfirstNode(){
    struct tree *first;
    int fa;
    first=(struct tree*)malloc(sizeof(struct tree));
    printf("enter data for first node");
    scanf(" %d",&fa);
    first->data=fa;
    first->left=NULL;
    first->right=NULL;
    createquee(NULL);
    createquee(&first);

}




void display()
{
    if (end == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct quee *temp = end;
    while (temp != NULL)
    {
        printf("%d-> ", temp->address);

        temp = temp->next;
    }
     printf("\n");
}
void main(){

}
