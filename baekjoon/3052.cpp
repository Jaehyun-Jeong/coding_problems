#include <iostream>
using namespace std;

int main(){
    int A[10], B, n = 0;
    for (int i = 0; i < 10; i++){
        cin >> A[i];
        A[i] = A[i] % 42;
    }
    for (int i = 0; i < 10; i++){
        B = 1;
        for (int j = 0; j < i; j++){
            if (A[i] == A[j]) B = 0;
        }
        n += B;
    }
    cout << n;
}
