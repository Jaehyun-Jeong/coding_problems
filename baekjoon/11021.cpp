#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    int I[T*2];
    for (int i = 0; i < T; i++) cin >> I[2*i] >> I[2*i+1];
    for (int i = 0; i < T; i++) cout << "Case #" << i+1 << ": " << I[2*i]+I[2*i+1] << '\n';
}
