#include <iostream>
using namespace std;

int main(){
    int N, S = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) S += i;
    cout << S;
}
