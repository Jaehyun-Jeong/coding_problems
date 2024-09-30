#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B && B == C) cout << 10000+A*1000;
    else if (A == B && A > C) cout << 1000+A*100;
    else if (B == C && B > A) cout << 1000+B*100;
    else if (A == C && C > B) cout << 1000+C*100;
    else if (A > B && A > C && B != C) cout << A*100;
    else if (B > A && B > C && A != C) cout << B*100;
    else if (C > A && C > B && A != B) cout << C*100;
    else cout << "Error occured!";
}
