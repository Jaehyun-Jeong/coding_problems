#include <iostream>
#include <vector>
using namespace std;

// return most frequent number
int majority1(const vector<int>& A){
    int N = A.size();
    int majority = -1, majorityCount = 0;
    for(int i = 0; i < N; ++i){
        int V = A[i], count = 0;
        for(int j = 0; j < N; ++j){
            if(A[j] == V) ++count;
        }
        if(count > majorityCount){
            majorityCount = count;
            majority = V;
        }
    }
    return majority;
}

int main(){

    vector<int> A = {1, 1, 2, 3, 3, 3};
    cout << majority1(A) << endl;

    return 0;
}
