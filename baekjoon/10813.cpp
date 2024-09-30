#include <iostream>
int main(){
    int A, B, D, E;
    int *C;
    std::cin >> A >> B;
    C = new int[A+1];
    for(int i=A; i--;) C[i]=i+1;
    while(B--){
        std::cin >> D >> E;
        C[A]=C[D-1];
        C[D-1]=C[E-1];
        C[E-1]=C[A];
    }
    for(int i=A; i--;) std::cout << C[A-i-1] << ' ';
}
