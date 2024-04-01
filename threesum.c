#include<stdio.h>
#include<stdlib.h>
int** threeSum(int* returnSize, int** returnColumnSizes);
int main(){
    int ar[6]={-1,0,1,2,-1,-4};
    int start=0,end=1,windowsum,i;
    while(end<6){
        windowsum=ar[start]+ar[end];
        for(i=(end+1);i<=5;i++){
            if(ar[i]+windowsum==3){
                printf("%d %d %d",start,i,end);
            }
            
        }
        start++;
        end++;
    }


}


void main(){
    int returnSize = 3;
     int colSize1 = 4, colSize2 = 4, colSize3 = 4;
    int *returnColumnSizes[] = {&colSize1, &colSize2, &colSize3}; // Array of pointers to integers
    int **a = threeSum(&returnSize, returnColumnSizes);
    int f=1;
    
    for(int i=0 ; i<3;i++){
        for(int j=0;j<4;j++){
            a[i][j]=f++;
        }
    }
    for(int i=0 ; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",a[i][j]);
        }
    }
}