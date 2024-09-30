#include <iostream>
#include <cstring>
int main(){
    int N, i;
    char *P;
    std::cin >> N;
    P = new char[N*2-1];
    for(i = 0; i < N; i++){
        memset(&P[0],' ', N-i-1);
        memset(&P[N-i-1], '*', (i+1)*2-1);
        std::cout << P << '\n';
    }
    while(--i){
        memset(&P[0], 0, N*2-1);
        memset(&P[0],' ', N-i);
        memset(&P[N-i], '*', i*2-1);
        std::cout << P << '\n';
    }
    delete[] P;
}
