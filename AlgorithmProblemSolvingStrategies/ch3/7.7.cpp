#include <iostream>
#include <vector>
#include <string>
using namespace std;


int bruteForce(const vector<int>& h){
    int ret = 0;
    int N = h.size();

    for(int left = 0; left < N; ++left){
        int minHeight = h[left];
        for(int right = left; right < N; ++right){
            minHeight = min(minHeight, h[right]);
            ret = max(ret, (right - left + 1) * minHeight);
        }
    }

    return ret;
}


int main(){
    
    int n = 7;
    vector<int> plates = {7, 1, 5, 9, 6, 7, 3};

    cout << check(plates, n) << endl;

    n = 7;
    plates = {1, 4, 4, 4, 4, 1, 1};

    cout << check(plates, n) << endl;

    n = 4;
    plates = {1, 8, 2, 2};

    cout << check(plates, n) << endl;

    return 0;
}
