#include <iostream>
using namespace std;

int main(){
    int A[1000];
    int n = 0;
    while(true) {
        cin >> A[2*n] >> A[2*n+1];
        if (cin.eof()) break; 
        n++;
    }
    for (int i = 0; i < n; i++) cout << A[2*i] + A[2*i+1] << '\n';
}
