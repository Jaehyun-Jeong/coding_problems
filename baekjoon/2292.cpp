#include <iostream>
#include <cmath>
int main(){
    int N;
    std::cin >> N;
    std::cout << ceil(sqrt(float(N-1)/3.0+0.25) - 0.5)+1;
}
