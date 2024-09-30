#include <iostream>
int main(){
    int N;
    char** C;
    std::cin >> N;
    C = new char*[N];
    for (int i = 0; i < N; i++){
        char L[21];
        int M, m, n = 0;
        std::cin >> M >> L;
        C[i] = new char[M*20+1];
        for (char w: L){
            m = M;
            while(m--){
                C[i][n] = w;
                n++;
            }
        }
    }
    for(int i = 0; i < N; i++) std::cout << C[i] << '\n';
}
