#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
    for(int i=0;i<=3;i++){
        int z=i+1;
        if(ar[i]>ar[z]){
            printf("not sorted");
            break;
        }
       
    }

}