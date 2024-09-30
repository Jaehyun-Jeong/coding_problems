#include <iostream>
using namespace std;

int main(){
    int N;
    float S;
    int* A, C = 0;
    cin >> N;
    A = new int[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
        if (A[i] > C) C = A[i];
    } 
    for (int i = 0; i < N; i++){
        S += float(A[i])/float(C);
    }
    S = (float(S) / float(N)) * 100.0;
    cout << S;
}
