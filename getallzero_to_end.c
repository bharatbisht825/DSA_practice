#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int ar[15]={8,6,0,2,0,0,6,7,8,8,6,0,7,0,2};
    int current=0,next=1,temp;
    bool flag=true;
    while(flag){
        current=0;
        next=1;
        while(next<=14){
            if(ar[current]<ar[next] || (ar[current]==0 && ar[next]==0 && ar[13]!=0 && ar[14]!=0)){
                temp=ar[current];
                ar[current]=ar[next];
                ar[next]=temp;
                flag=true;
            }
            else{
                flag=false;
            }
            current=current+1;
            next=next+1;
        }

    }
    for(int i=0;i<=14;i++){
        printf("%d",ar[i]);
    }

}