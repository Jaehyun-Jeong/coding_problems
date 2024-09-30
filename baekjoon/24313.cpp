#include <iostream>

int main(void){
    int a1, a0, c, n0;

    std::cin >> a1 >> a0 >> c >> n0;

    if(a1-c <= 0 && (a1-c)*n0 + a0 <= 0)
        std::cout << 1 << '\n';
    else
        std::cout << 0 << '\n';
}
