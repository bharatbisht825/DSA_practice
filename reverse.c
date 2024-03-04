#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
   int initial=0,final=4,temp;
   while(initial<=final){
        temp=ar[initial];
        ar[initial]=ar[final];
        ar[final]=temp;
        initial=initial+1;
        final=final-1;
   }
   for (int i = 0; i < 5; i++)
   {
    printf("%d ",ar[i]);
   }
   
}