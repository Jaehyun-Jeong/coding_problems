#include <iostream>
int main(){
    int A, B, D, E, F;
    int *C;
    std::cin >> A >> B;
    C = new int[A];
    while(B--){
        std::cin >> D >> E >> F;
        E=E-D+1;
        while(E--)C[D+E-1]=F;
    }
    F = A;
    while(A--) std::cout << C[F-A-1] << ' ';
    delete[] C;
}
