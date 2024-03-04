#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
    int min=ar[0];
    for(int i=0;i<5;i++){
       if(ar[i]<min){
        min=ar[i];
       }
        
       
    }
    printf("%d",min);

}