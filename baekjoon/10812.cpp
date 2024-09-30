#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int N, M, *C, *D;
    cin >> N >> M;
    C = new int[N];
    for(int i=1; i<=N; i++) C[i-1] = i; 
    for(int i, j, k, m=0; m<M; m++){
        cin >> i >> j >> k;
        D = new int[j-i+2];
        memcpy(&D[0], &C[k-1], 4*(j-k+1));
        memcpy(&D[j-k+1], &C[i-1], 4*(k-i));
        memcpy(&C[i-1], &D[0], 4*(j-i+1));
    }
    for(int i=0;i++<N;) cout << C[i-1] << ' ';
    delete[] C;
    delete[] D;
}
