#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stack>
using namespace std;


int optimized(const vector<int>& signals, int k){
    int ret = 0, tail = 0, rangeSum = signals[0];
    for(int head = 0; head < signals.size(); ++head){
        while(rangeSum < k && tail + 1 < signals.size())
            rangeSum += signals[++tail];
        if(rangeSum == k) ret++;
        rangeSum -= signals[head];
    }
    return ret;
}


int main(){
    return 0;
}
