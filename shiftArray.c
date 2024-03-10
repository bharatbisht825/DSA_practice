#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[5]={4,5,6,7,8};
    int i=0, temp=0;
    int shiftadd=0,currentadd=shiftadd+1;
    while(i<=3){
        shiftadd=0,currentadd=shiftadd+1;
        temp=ar[0];
        for(int j=0;j<4;j++){
            ar[shiftadd]=ar[currentadd];
            shiftadd=shiftadd+1;
            currentadd=currentadd+1;
        }
        ar[shiftadd]=temp;
        i=i+1; 
    }
    for(int k=0;k<5;k++){
        printf("%d",ar[k]);
    }

}