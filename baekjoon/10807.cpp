#include <iostream>
using namespace std;

int main(){
    int N, L, n = 0;
    int* M;
    cin >> N;
    M = new int[N];
    for (int i = 0; i < N; i++) cin >> M[i];
    cin >> L;
    for (int i = 0; i < N; i++) {
        if (M[i] == L) n++; 
    }
    cout << n;
}
