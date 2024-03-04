#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int ar[5]={44,97,6,7,8};
    bool cont=true;
    while (cont)
    {
        for(int i=0;i<4;i++){
        int z=i+1,temp=0;
        if(ar[i]>ar[z]){
            cont=true;
            temp=ar[i];
            ar[i]=ar[z];
            ar[z]=temp;   
            continue;    
        }
        else{
            cont=false;
        }
        
    } 
   
}
 for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    } 
}
