#include <iostream>
using namespace std;

int main(){
    int X, N, S = 0;
    cin >> X >> N;
    int I[2*N];
    for (int i = 0; i < N; i++){
        cin >> I[2*i] >> I[2*i+1];
        S += I[2*i]*I[2*i+1];
    }
    if (S == X) cout << "Yes";
    else cout << "No";
}
