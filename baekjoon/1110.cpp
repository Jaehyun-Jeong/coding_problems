#include <iostream>
using namespace std;

int main(){
    int N[1000], A, B, n = 0;
    cin >> N[0];
    while(true){
        A = N[n]/10;
        B = N[n]%10;
        n++;
        N[n] = B*10 + (A+B)%10;
        if (N[n] == N[0]) break;
    }
    cout << n;
}
