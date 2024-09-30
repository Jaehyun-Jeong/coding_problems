#include <iostream>
int main(){
    int N, n = 2;
    std::cin >> N;  
    while(N-1){
        while(!(N%n)){
            std::cout << n << '\n';
            N /= n;
        }
        n++;
    }
}
