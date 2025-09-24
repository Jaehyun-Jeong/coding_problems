#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stack>
using namespace std;


int simple(const vector<int>& signals, int k){
    int ret = 0;
    for(int head = 0; head < signals.size(); ++head){
        int sum = 0;
        for(int tail = head; tail < signals.size(); ++tail){
            sum += signals[tail];
            if(sum == k) ++ret;
            if(sum >= k) break;
        }
    }
    return ret;
}


int main(){
    return 0;
}
