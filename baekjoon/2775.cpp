#include <iostream>
int main(){
    int T, s = 0;
    int **P, **H;
    std::cin >> T;
    P = new int*[T];
    H = new int*[14];
    for(int i = 0; i < 14; i++){
        s += i+1;
        H[i] = new int[14];
        H[0][i] = s;
    }
    for(int i = 1; i < 14; i++){
        s = 0;
        for(int j = 0; j < 14; j++){
            s += H[i-1][j];
            H[i][j] = s;
        }
    }
    for(int i = T; i--;){
        P[i] = new int[2];
        std::cin >> P[i][0] >> P[i][1];
    }
    while(T--) std::cout << H[P[T][0]-1][P[T][1]-1] << '\n';
    delete[] P;
    delete[] H;
}
