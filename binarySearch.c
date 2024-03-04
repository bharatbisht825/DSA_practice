#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
    int low=0,high=4,mid,term=7;
    mid=(low+high)/2;
    while(low<=high){
        if(ar[mid]==term){
            printf("found at %d",mid);
            break;
        }
        else if (ar[mid]>term)
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        else{
            low=mid+1;
            mid=(low+high)/2;
        }
    }



}