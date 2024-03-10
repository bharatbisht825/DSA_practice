#include <stdio.h>
#include<stdlib.h>
void main(){
    int ar[6]={-5,2,18,-121,8,7};
    int end=1,start=0,last=end,max=0,setStart,setEnd;

    // to increase the size of window
    while(last<=5){

        // to move the window throught the array
        while(end<=5){
            int sum=0;
            int i;

            // to itrerate throught the elements in the window
            for( i=start;i<=end;i++){
                sum=ar[i]+sum;   
            }
            // to check for max element in each itretation
            if(sum>max){
                max=sum;
                setStart=start;
                setEnd=end;
            }
            printf("%d \n",sum);
            start=start+1; // move the start by one
            end=end+1;   // move the end by one
        }
        last=last+1; // increse the size of window by increasing the end of the element
        end=last;
        start=0;  // keep the start same when you change the size
    }
    printf("max=%d \n start=%d \n  end=%d \n ",max,setStart,setEnd);
}