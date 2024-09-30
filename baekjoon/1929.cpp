#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N, M;
    bool* T;
    std::cin >> N >> M;
    T = new bool[M]{1};
    for(int i = 2; i*i <= M; i++) if(!(T[i-1])) for(int j = i*i; j <= M; j += i) T[j-1] = 1;
    for(int i = N-1; i < M; i++) if(!(T[i])) std::cout << i+1 << '\n';
}
