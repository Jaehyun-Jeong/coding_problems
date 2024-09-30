#include <iostream>

int main(void){
    int n, k, primeNumber = 0, counter = 0, ans = 0;
    
    std::cin >> n >> k;
    
    while(primeNumber++ <= n && ans == 0){
        if(!(n % primeNumber)) counter++;
        if(counter == k) ans = primeNumber;
    }
    
    std::cout << ans << '\n';
}
