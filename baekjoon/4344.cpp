#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int N, M, C = 0;
    float SS = 0;
    int* S;
    float* A;
    cin >> N;
    A = new float[N];
    for(int i = N-1; i >= 0; i--){
        cin >> M;
        S = new int[M]();
        for (int j = 0; j < M; j++){
            cin >> S[j];
            SS += float(S[j]);
        }
        SS /= M;
        for (int j = 0; j < M; j++){
            if (S[j] > SS) C++;
        }
        A[i] = float(C) / M; 
        C = 0;
        SS = 0;
    }
    while(N--) cout << fixed << setprecision(3) << float(A[N] * 100) << '%' << '\n';
}
