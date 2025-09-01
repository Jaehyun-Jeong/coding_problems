#include <iostream>
#include <vector>
#include <string>
using namespace std;


int n;
int cache[100], S[100];

int lis2(int start){
    int& ret = ache[start];
    if(ret != -1) return ret;

    ret = 1;
    for(int next = start+1; next < n; ++next)
        if(S[start] < S[next])
            ret = max(ret, lis2(next) + 1);

    return ret;
}


int main(){
    return 0;
}
