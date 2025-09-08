#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


const int MOD = 1000000007;
int n, m;
int cache[101];


int tiling(int width){
    if(width <= 1) return 1;

    int& ret = cache[width];
    if(ret != -1) return ret;
    return ret = (tiling(width-2) + tiling(width-1)) % MOD;
}


int asymmetric2(int width){
    if(width <= 2) return 0;

    int& ret = cache[width];
    if(ret != -1) return ret;
    ret = asymmetric2(width-2) % MOD;
    ret = (ret + asymmetric2(width-4)) % MOD;
    ret = (ret + tiling(width-3)) % MOD;
    ret = (ret + tiling(width-3)) % MOD;
    return ret;
}


int solve(int width){
    memset(cache, -1, sizeof(cache));
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
