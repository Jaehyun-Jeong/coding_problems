#include <iostream>
int main(){
    int N;
    std::cin >> N;
    if(N%5 == 0) std::cout << N/5;
    else if((N%5)%3 == 0) std::cout << N/5+1;
    else{
        int M = N/5;
        while(--M) if((N-M*5)%3 == 0) break;
        if(M<1 && N%3 != 0) std::cout << -1;
        else if(M<1 && N%3 == 0) std::cout << N/3;
        else std::cout << M+(N-M*5)/3;
    }
}
