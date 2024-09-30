#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N, M, S, K, i;
    bool* T;
    std::cin >> N >> M;
    S = N;
    T = new bool[M-N+1]{0, 1};
    std::fill(T+2, T+M-N-1, 1);
    i = (N%2)?1:0;
    if(N<3 && M>2) i += 2;
    while(i<=M-N){
        T[i] = 0;
        i += 2;
    }
    while(M-(N++)+1){
        for(i = 2; i < N-1; i++) if((N-1)%i == 0) break;
        if(N-1 == i && T[i-S]){
            K = i;
            while(K <= M){
                K += i;
                T[K-S] = 0;
            }
        }
    }
    for(long j = 0; j < M-S+1; j++) if(T[j]) std::cout << j+1 << '\n';
    delete[] T;
}
