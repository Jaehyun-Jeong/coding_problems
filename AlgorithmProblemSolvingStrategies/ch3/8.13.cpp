#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;


const long long NEGINF = numeric_limits<long long>::min();
int n, m, A[100], B[100];
int cache[101][101];


int jlix(int indexA, int indexB){
    int& ret = cache[indexA+1][indexB+1];
    if(ret != -1) return ret;

    ret = 2;
    long long a = (indexA == -1 ? NEGINF : A[indexA]);
    long long b = (indexB == -1 ? NEGINF : B[indexB]);
    long long maxElement = max(a, b);

    for(int nextA = indexA + 1; nextA < n; ++nextA)
        if(maxElement < A[nextA])
            ret = max(ret, jlix(nextA, indexB) + 1);

    for(int nextB = indexB + 1; nextB < m; ++nextB)
        if(maxElement < B[nextB])
            ret = max(ret, jlix(indexA, nextB) + 1);

    return ret;
}


int main(){
    return 0;
}
