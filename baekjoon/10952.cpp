#include <iostream>
using namespace std;

int main(){
    int A[1000];
    int n = 0, m = 0;
    while (true){
        cin >> A[2*n] >> A[2*n+1];
        if (A[2*n] == 0 && A[2*n+1] == 0) break;
        n++;
    }
    while (m++ < n) cout << A[2*m-2] + A[2*m-1] << '\n';
}
