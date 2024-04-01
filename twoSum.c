#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int ar[4]={0,1,7,8};
    int start=0,end=3,target=9,i;
    bool flag=true;
    while(flag){
        for(i =(start+1);i<=end;i++){
            if(ar[start]+ar[i]==target){
                printf("%d%d",start,i);
                flag=false;
                break;
            }

        }
        start++;
    }

}