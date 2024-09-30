#include <iostream>
int main(){
    int A, B, V, n = 0;
    std::cin >> A >> B >> V;
    if(A == V) std::cout << 1;
    else std::cout << (V-A-1)/(A-B)+2;
}
