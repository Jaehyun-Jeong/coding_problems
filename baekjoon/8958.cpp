#include <iostream>
using namespace std;

int main(){
    int N, s;
    int* M;
    char L[81] = {0};
    cin >> N;
    M = new int[N]();
    for (int i = 0; i < N; i++){
        cin >> L;
        s = 0;
        for (int j = 0; j < 80; j++){
            if (L[j] == 79){
                M[i] += ++s;
                L[j] = 88;
            } else s = 0;
        }
    }
    for (int i = 0; i < N; i++) cout << M[i] << '\n';
}
