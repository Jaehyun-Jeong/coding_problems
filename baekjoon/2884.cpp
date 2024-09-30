#include <iostream>
using namespace std;

int main(){
    int H, M;
    cin >> H >> M;
    if (M >= 45) M -= 45;
    else {
        M += 15;
        if (H > 0) H -= 1;
        else H = 23;
    } 
    cout << H << ' ' << M;
}
