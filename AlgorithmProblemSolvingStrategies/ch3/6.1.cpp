#include <iostream>
using namespace std;

int sum(int n){
    int ret = 0;
    for(int i = 1; i <= n; ++i)
        ret += i;
    
    return ret;
}

int recursiveSum(int n){
    if(n == 1) return 1;
    return n + recursiveSum(n - 1);
}

int main(){

    int A = 10;

    cout << sum(A) << endl;
    cout << recursiveSum(A) << endl;

    return 0;
}
