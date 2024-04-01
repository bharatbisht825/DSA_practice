
#include<stdio.h>
#include<stdlib.h>
int** threeSum(int* nums, int numsSize,int* returnSize, int** returnColumnSizes) {
    int **ar;
    ar=(int **)malloc((*returnSize)*sizeof(int*));
    for(int i =0;i<*returnSize;i++){
        ar[i]=(int *)malloc((*returnColumnSizes)[i]*sizeof(int));
    }
    int addAri,addArj;
    int start=0,end=1,windowsum,i;
    int row,coloumn;
    while(end<numsSize){
        windowsum=nums[start]+nums[end];
        for(i=(end+1);i<=5;i++){
            if(nums[i]+windowsum==3){
                //to append
                for(row=0;row<*returnSize;row++){
                    for(coloumn=0;coloumn<3;coloumn++){
                        ar[row][coloumn];
                    }
                }
                
            }
            
        }
        start++;
        end++;
    }
    return ar;
}
void main(){
    int returnSize = 3;
     int colSize1 = 4, colSize2 = 4, colSize3 = 4;
     int nums[6] = {-1,0,1,2,-1,-4};
     int numsSize=6;
    int *returnColumnSizes[] = {&colSize1, &colSize2, &colSize3}; // Array of pointers to integers
    int **a = threeSum(nums, numsSize,&returnSize, returnColumnSizes);
    int f=1;
    
   
    for(int i=0 ; i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d",a[i][j]);
        }
    }
}