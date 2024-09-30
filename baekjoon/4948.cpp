#include <iostream>
int main(){
    int N=1, n;
    int M[10000]={};
    bool* T;
    T = new bool[246912]{1}; 
    for(int i = 2; i*i <= 246912; i++) if(!(T[i-1])) for(int j = i*i; j <= 246912; j += i) T[j-1] = 1;
    for(int i = 0; i < 10000; i++){
        std::cin >> N;
        if(!N) break;
        else{
            n = 0;
            for(int j = N; j < 2*N; j++) if(!(T[j])) n++;
            M[i] = n;
        }
    }
    n = 0;
    while(M[n++]) std::cout << M[n-1] << '\n';
    delete[] T;
}
