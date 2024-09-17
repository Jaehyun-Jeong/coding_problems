#include <stdio.h>


int step(int* minSteps, int steps, int idx, int* nums, int numSize){

    int i, num = nums[idx];

    if(numSize-1 <= idx){

        if(*minSteps == -1 || *minSteps > steps)
            *minSteps = steps;

        return steps;

    }
    else{
        for(i = 1; i <= num; i++){
            step(minSteps, steps+1, idx+i, nums, numSize);
        }
    }
}

int jump(int* nums, int numSize){

    int minSteps = -1;

    int stepSize = step(&minSteps, 0, 0, nums, numSize);

    return minSteps;
}

int main(void){

    int nums[10] = {2, 3, 1, 1, 4}, numSize = 5;

    printf("%d\n", jump(nums, numSize));

    return 0;
}
