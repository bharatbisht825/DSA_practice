#include<stdio.h>
#include<stdlib.h>
int main(){
    int ar[2]={1,1};
    int current=0, end=1,height=0,breadth=0,vol,max=0,start,final,i;
    while(current<end){
        for(i=0;i<=end;i++){
            if(ar[current]<=ar[i]){
                height=ar[current];
                breadth=(i-current);
                vol=height*breadth;

            }
            else
            {
                height=ar[i];
                breadth=(i-current);
                vol=height*breadth;
            }
            if(max<vol){
                max=vol;
                start=current;
                final=i;
            }
            
        }
        current++;
    }
    printf("%d %d %d ",max,start,final);
}