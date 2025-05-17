#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> ans;
        int i = 0, j = 0;

        while(i < m && j < n){
            if(nums1[i] < nums2[j] && i < m){
                ans.push_back(nums1[i++]);
            } else if(j < n){
                ans.push_back(nums2[j++]);
            }
        }
        while(i < m) ans.push_back(nums1[i++]);
        while(j < n) ans.push_back(nums2[j++]);

        nums1.assign(ans.begin(), ans.end());
    }
};

int main(){

    Solution sol;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    sol.merge(nums1, m, nums2, n);

    nums1 = {1}, nums2 = {};
    m = 1, n = 0;
    sol.merge(nums1, m, nums2, n);

    nums1 = {0}, nums2 = {1};
    m = 0, n = 1;
    sol.merge(nums1, m, nums2, n);

    return 0;
}
