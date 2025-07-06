#include <iostream>
#include <vector>
using namespace std;

// Return most frequent value from 0 to 100
int majority2(const vector<int>& A){
    int N = A.size();
    vector<int> count(101, 0);
    for(int i = 0; i < N; ++i){
        count[A[i]]++;
    }

    int majority = 0;
    for(int i = 1; i <= 100; ++i){  // since majority starts at 0
        if(count[i] > count[majority]) majority = i;
    }

    return majority;
}

int main(){

    vector<int> A = {1, 1, 1, 1, 2, 3, 3, 3, 101, 101, 101, 101, 101};
    cout << majority2(A) << endl;

    return 0;
}
