#include <iostream>
int main(){
    int *A, B, C, D, E, i;
    std::cin >> B >> C;
    A = new int[B];
    for(i=0; i++<B;) A[i-1]=i;
    while(C--){
        std::cin >> D >> E;
        D-=2;
        while(--E!=++D&&E!=D-1){
            i = A[E];
            A[E] = A[D];
            A[D] = i;
        }
    }
    for(i=0; i++<B;) std::cout << A[i-1] << ' ';
}
