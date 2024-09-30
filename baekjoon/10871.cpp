#include <iostream>
using namespace std;

int main(){
    int N, X;
    int* A;
    cin >> N >> X;
    A = new int[N];
    for (int i = 0; i < N; i++) cin >> A[i]; 
    for (int i = 0; i < N; i++) {
        if (A[i] < X) cout << A[i] << ' ';
    }
}
