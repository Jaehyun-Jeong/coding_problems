#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N, M, *G, n = 0;
    bool* T;
    std::cin >> N;
    T = new bool[10000]{1};
    for(int i = 2; i*i <= 10000; i++) if(!(T[i-1])) for(int j = i*i; j <= 10000; j += i) T[j-1] = 1;
    G = new int[2*N];
    while(N--){
        std::cin >> M;
        for(int i = M/2; i > 1; i--){
            if(!(T[i-1]) && !(T[M-i-1])){
                G[2*n] = i;
                G[2*n+1] = M-i;
                n++;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++) std::cout << G[2*i] << ' ' << G[2*i+1] << '\n';
    delete[] G;
    delete[] T;
}
