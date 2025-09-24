#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
using namespace std;


long long int MOD = (long long int)pow(2, 32);


void printQueue(queue<int> s){
    queue<int> tmp = s;
    while(!tmp.empty()){
        cout << tmp.front() << ' ';
        tmp.pop();
    }
    cout << endl;
}


int solve(int targetSum, int N){
    int sum = 1983, ret = 0;
    long long int currentNum;
    queue<int> q;
    q.push(sum);
    currentNum = sum;

    --N; // 1983 is the first element, then should run 19 times
    while(N){
        if(sum == targetSum)
            ++ret;
        if(sum <= targetSum){
            currentNum = (long long)(currentNum * 214013 + 2531011) % MOD;
            q.push(currentNum % 10000 + 1);
            sum += q.back();
            --N;
        } else {
            sum -= q.front();
            q.pop();
        }
    }

    return ret;
}


int main(){

    cout << solve(8791, 20) << endl;
    cout << solve(5265, 5000) << endl;
    cout << solve(3578452, 5000000) << endl;

    return 0;
}
