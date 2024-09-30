#include <iostream>
using namespace std;

int main(){
    int A[30] = {0}, B;

    for (int i = 0; i < 28; i++){
        cin >> B;
        A[B-1] = 1;
    }
    for (int i = 0; i < 30; i++){
        if (A[i] == 0) cout << i+1 << '\n';
    }
}
