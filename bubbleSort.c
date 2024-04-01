#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int ar[9]={44,0,97,97,97,0,6,7,8};
    bool cont=true;
    while (cont)
    {
        for(int i=0;i<8;i++){
        int z=i+1,temp=0;
        if(ar[i]>ar[z]){
            cont=true;
            temp=ar[i];
            ar[i]=ar[z];
            ar[z]=temp;   
            
        }
        else{
            cont=false;
        }
        
    } 
   
}
 for(int i=0;i<8;i++){
        printf("%d ",ar[i]);
    } 
}
