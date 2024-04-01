#include <stdio.h>
#include <stdlib.h>

struct quee
{
    int address;
    struct quee *next;
};

struct quee *first=NULL,*end=NULL;
// struct tree
// {
//    struct tree *left;
//    int data ;
//    struct tree *right;
// };
void createquee(int addr);
int pop();
void display();
void createquee(int addr)
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
    return current->address;
    }
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
 createquee(5);
 createquee(6);
 createquee(4);
 createquee(2);
 createquee(7);
 createquee(2);


 printf("\n");
    printf("%d",first->address);

 pop();

    printf("%d",first->address);

pop();
    printf("%d \n",first->address);

display();


 
}
