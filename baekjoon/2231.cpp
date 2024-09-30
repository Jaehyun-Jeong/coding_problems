#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int A, B, C, D, i = 0;

    cin >> A;

    B = A - 55;
    while(C != A && B++ <= A){
        C = B;
        D = B;
        while(D){
            C += D%10;
            D /= 10;
        }
    }

    if(B >= A)
        B = 0;

    cout << B << endl;
}
