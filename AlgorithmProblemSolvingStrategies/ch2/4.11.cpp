#include <iostream>
#include <limits>
#include <vector>
using namespace std;

const int MIN = numeric_limits<int>::min();

int fastestMaxSum(const vector<int>& A){
    int N = A.size(), ret = MIN, psum= 0;
    for(int i = 0; i < N; ++i){
        psum = max(psum, 0) + A[i];
        ret = max(psum, ret);
    }

    return ret;
}

int main(){
    vector<int> array = {1, 3, 5, 11, 20};

    cout << fastMaxSum(array, 0, 4) << endl;

    return 0;
}
