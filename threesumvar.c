#include<stdio.h>
#include<stdlib.h>
int main(){
    int ar[6]={-1,0,1,2,-1,-4};
    int starti=0,endi=1,windowsumi,i;
    while(endi<6){
        windowsumi=ar[starti]+ar[endi];
        for(i=(endi+1);i<=5;i++){
            if((ar[i]+windowsumi==0)&&ar[starti]!=ar[endi]&&ar[endi]!=ar[i]&&ar[i]!=ar[starti]){
                printf("%d %d %d \n",ar[starti],ar[i],ar[endi]);
            }           
        }
        starti++;
        endi++;
    }
    int start=5,end=4,windowsum,j;
    while(end>=0){
        windowsum=ar[start]+ar[end];
        for(j=(end-1);j>=0;j--){
            if((ar[j]+windowsum==0)&&ar[start]!=ar[end]&&ar[end]!=ar[i]&&ar[i]!=ar[start]){
                printf("%d %d %d \n",ar[start],ar[j],ar[end]);
            }            
        }
        start--;
        end--;
    }
}