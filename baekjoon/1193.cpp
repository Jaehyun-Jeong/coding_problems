#include <iostream>
int main(){
    int X, n=0;
    std::cin >> X;
    while(++n) if (n*(n-1)/2 < X && n*(n+1)/2 >= X) break;
    X = X-n*(n-1)/2;
    if (n%2 == 0) std::cout << X << '/' << n+1-X;
    else std::cout << n+1-X << '/' << X;
}
