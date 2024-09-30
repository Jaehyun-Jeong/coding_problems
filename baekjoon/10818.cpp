#include <iostream>
using namespace std;

int main(){
    int N, A, B, C;
    cin >> N;
    cin >> A;
    B = A;
    C = A;
    for (int i = 1; i < N; i++){
        cin >> A;
        if (B < A) B = A;   
        if (C > A) C = A;
    }
    cout << C << ' ' << B;
}
