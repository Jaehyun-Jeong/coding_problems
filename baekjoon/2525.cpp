#include <iostream>
using namespace std;

int main(){
    int H, M, S;
    cin >> H >> M >> S;
    M += S%60;
    H += S/60;
    if (M >= 60){
        H += 1;
        M -= 60;
    }
    if (H >= 24) H %= 24;
    cout << H << ' ' << M;
}
