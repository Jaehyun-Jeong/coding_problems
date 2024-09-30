#include <iostream>
int main(){
    int N, B = 0;
    char* A;
    std::cin >> N;
    A = new char[N];
    std::cin >> A;
    while(N--) B += int(A[N])-48;
    std::cout << B;
}
