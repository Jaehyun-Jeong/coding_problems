#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int hugs(const string& members, const string& fans){
    int N = members.size(), M = fans.size();
    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) A[i] = (members[i] == 'M');
    for(int i = 0; i < M; ++i) B[M-i-1] = (fans[i] == 'M');

    vector<int> C = karatsuba(A, B);
    int allHugs = 0;
    for(int i = N-1; i < M; ++i)
        if(C[i] == 0)
            ++allHugs;

    return allHugs;
}


int main(){
    return 0;
}
