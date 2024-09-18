#include <stdio.h>



int jump(int* nums, int numsSize){

    int i = numsSize - 1;
    int lastWindow = numsSize - 1;

    if(numsSize == 1){
        return 0;
    }

    while(i >= 0){
        if(nums[i] >= numsSize - i - 1)
            lastWindow = i;
        i--;
    }

    // It ends at nums[0]
    if(lastWindow == 0){
        return 1;
    } else {
        return 1 + jump(nums, lastWindow+1);
    }
}


int main(void){

    int nums1[] = {5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5};
    int nums1Size = 34;
    printf("%d\n", jump(nums1, nums1Size));

    int nums2[] = {1,2,3};
    int nums2Size = 3;
    printf("%d\n", jump(nums2, nums2Size));

    int nums3[] = {0};
    int nums3Size = 1;
    printf("%d\n", jump(nums3, nums3Size));

    int nums4[] = {2,3,1,1,4};
    int nums4Size = 5;
    printf("%d\n", jump(nums4, nums4Size));

    return 0;
}
