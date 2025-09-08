#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


const int MOD = 1000000007;
int cache[101];


int tiling(int width){
    if(width <= 1) return 1;

    int& ret = cache[width];
    if(ret != -1) return ret;
    return ret = (tiling(width-2) + tiling(width-1)) % MOD;
}


int solve(int n){
    memset(cache, -1, sizeof(cache));
    if(n % 2 == 1)
        return (tiling(n) - tiling(n/2) + MOD) % MOD;

    int ret = tiling(n);
    ret = (ret - tiling(n/2) + MOD) % MOD;
    ret = (ret - tiling(n/2 - 1) + MOD) % MOD;

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
