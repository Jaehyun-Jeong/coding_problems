#include <stdio.h>


int jump(int* nums, int numsSize) 
{

    if(numsSize == 1) return 0;
    if(numsSize == 2) return 1;


    int* reach = nums+*nums; //Tracks farthers reachable point
    int* last = nums; //Tracks previous reach
    int* pos = nums;
    int* next = NULL;
    int jumps = 0; //Tracks jumps

    while (pos < nums+numsSize)
    {

        next = pos+*pos;

        printf("next: %d\n", *next);

        if(next > reach)
        {
            reach = next;
        }

        if(pos == last)
        {
            last = reach;
            jumps++;
        }

        if(last >= nums+numsSize-1)
        {
            break;
        }
        pos++;
    }
    return jumps;
}


int main(void){

    /*
    int nums1[] = {5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5,2,7,9,7,9,6,9,4,1,6,8,8,4,4,2,0,3,8,5};
    int nums1Size = 34;
    printf("%d\n", jump(nums1, nums1Size));

    int nums2[] = {1,2,3};
    int nums2Size = 3;
    printf("%d\n", jump(nums2, nums2Size));

    int nums3[] = {0};
    int nums3Size = 1;
    printf("%d\n", jump(nums3, nums3Size));
    */

    int nums4[] = {2,3,1,1,4};
    int nums4Size = 5;
    printf("%d\n", jump(nums4, nums4Size));

    /*
    int nums4[] = {2,3,1,1,4};
    int nums4Size = 5;
    jump(nums4, nums4Size);
    */

    return 0;
}
