#include <iostream>
int main(){
    int F, L = 0, N, M, i;
    std::cin >> N >> M;
    while(M-(N++)+1){
        for(i = 2; i < N-1; i++) if((N-1)%i == 0) break;
        if(N-1 == i){
            L += N-1;
            if(L == N-1) F = L;
        }
    }
    if(L) std::cout << L << '\n' << F;
    else std::cout << -1;
}
