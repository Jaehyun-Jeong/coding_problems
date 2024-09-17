#include <stdio.h>


int step(int* minSteps, int* nums, int startIdx){

    int i = startIdx - 1;

    while(nums[i] >= startIdx - i){
        if(i == 0)
            return 0;
        else
            i--;
    }

    *minSteps += 1;

    step(minSteps, nums, i);
}

int jump(int* nums, int numSize){

    int minSteps = 0;

    step(&minSteps, nums, numSize-1);

    return minSteps;
}

int main(void){

    int nums[100] = {5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5}, numSize = 34;

    printf("%d\n", jump(nums, numSize));

    return 0;
}
