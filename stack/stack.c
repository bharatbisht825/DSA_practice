 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>

 struct node
 {
    int data;
    struct node *next;
 };

 struct node *start=NULL,*top=NULL;
 int counter=0;
 void push(int Data);
 void pop();
 void top_element();
  void isempty();
void size();
 void push(int Data){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=Data;
    newnode->next=NULL;


    if(start==NULL){
        start=top=newnode;
        counter++;
    }
    else{
        top->next=newnode;
        top=newnode;
        counter++;
    }
 }
 

 void pop(){
    if(start==NULL){
        printf("STACK IS EMPTY \n");
        return;
    }

    else if (start==top)
    {
        start=NULL;
        top=NULL;
        counter--;
        printf("removed the last element in stack now its empty \n");
        return;
    }
    else{
        struct node*current;
        current=start;
        while (current->next!=top)
        {
            current=current->next;
        }
       current->next=NULL;
       top=current;
       counter--;
       printf("popped sucesfully \n" );
        
    }
    
 }

 void top_element(){
    printf(" the top element is %d \n",top->data);
 }

 void isempty(){
    if(start==NULL){
        printf("stack is empty \n");
    }
    else{
        printf("not empty");
    }
 }

 void size(){
    printf("the size of stack is %d \n",counter);
 }

 void main(){
    push(350);
    push(850);
    push(745);
    push(625);
    push(75);
    push(55);
    push(50);




    size();

    pop();
    pop();

    size();



    isempty();
    

     pop();
    pop();
     pop();
    pop();
     pop();

     size();

     isempty();

     pop();
 

 }