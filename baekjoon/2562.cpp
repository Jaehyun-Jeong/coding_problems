#include <iostream>
using namespace std;

int main(){
    int A[9], B = 1, C = 1;
    for (int i = 0; i < 9; i++){
        cin >> A[i];
        if (B < A[i]){
            B = A[i];
            C = i+1;
        }
    }
    cout << B << '\n' << C;
}
