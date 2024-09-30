#include <iostream>
int main(void){
    int N, M, M1[100][100], M2[100][100];
    std::cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            std::cin >> M1[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            std::cin >> M2[i][j];
            std::cout << M1[i][j] + M2[i][j] << ' ';
            // M2[i][j] += M1[i][j];
        }
        std::cout << '\n';
    }
}
