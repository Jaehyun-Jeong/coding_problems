#include <iostream>
int main(){
    int T, H, W;
    int** V;
    std::cin >> T;
    V = new int*[T];
    for(int i = 0; i < T; i++){
        V[i] = new int[3];
        std::cin >> V[i][0] >> V[i][1] >> V[i][2];
    }
    for(int i = 0; i < T; i++){
        if(V[i][2]%V[i][0] == 0){
            H = V[i][0];
            W = V[i][2]/V[i][0];
        } else {
            H = V[i][2]%V[i][0];
            W = V[i][2]/V[i][0]+1;
        }
        std::cout << H;
        if(W<10) std::cout << 0;
        std::cout << W << '\n';
    }
    delete[] V;
}
