#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int I[T*2];
    for (int i = 0; i < T; i++) cin >> I[2*i] >> I[2*i+1];
    for (int i = 0; i < T; i++) cout << I[2*i]+I[2*i+1] << endl;
}
