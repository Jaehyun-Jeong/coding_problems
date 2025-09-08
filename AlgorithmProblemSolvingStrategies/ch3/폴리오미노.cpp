#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


const int MOD = 10000000;
int cache[101][101];


int polyomino(int start, int n){
    if(n == 0)
        return 1;

    int& ret = cache[start-1][n-1];
    if(ret != -1)
        return ret;

    ret = 0;
    for(int i = 1; i <= n; ++i)
        ret += (start + i - 1) * polyomino(i, n - i);

    return ret % MOD;
}


int solve(int n){
    memset(cache, -1, sizeof(cache));

    int ret = 0;
    for(int i = 1; i <= n; ++i)
        ret += polyomino(i, n - i);
    ret = ret % MOD;

    return ret;
}


int main(){

    int n = 2;
    cout << solve(n) << endl;

    n = 4;
    cout << solve(n) << endl;

    n = 92;
    cout << solve(n) << endl;

    return 0;
}
