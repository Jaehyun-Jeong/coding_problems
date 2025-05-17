#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(auto i: nums){
            if(i != val)
                nums[k++] = i;
        }

        for(int i = 0; i < k; i++)
            cout << nums[i];
        cout << endl;

        return k;
    }
};

int main(){

    Solution sol;

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    sol.removeElement(nums, val);

    nums = {0, 1, 2, 2, 3, 0, 4, 2};
    val = 2;
    sol.removeElement(nums, val);

    return 0;
}
