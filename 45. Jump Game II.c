#include <stdio.h>


int jump(int* nums, int numsSize){

    if(numsSize == 1){
        return 0;
    }

    int i = numsSize - 1;

    while(nums[i] >= numsSize - i - 1 && i >= 0){
        i--;
    }

    // It ends at nums[0]
    if(i == 0){
        return 2;
    } else if(i == -1){
        return 1;
    }

    return 1 + jump(nums, i+1);
}


int main(void){

    int nums[100] = {5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5}, numsSize = 34;
    //int nums[] = {1,2,3};
    //int nums[] = {0};
    //int nums[] = {2,3,1,1,4};
    //int numsSize = 3;

    printf("%d\n", jump(nums, numsSize));

    return 0;
}
