#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
    int br[5]={5,6,8,7,8};
    int new[5]={};
    int max=0;
    int k=0;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(ar[i]==br[j]){
            new[k]=br[j];
            k=k+1;
            break;
        }
        }
      }
    for(int i=0;i<5;i++){
    printf("%d",new[i]);
   }
}

   

