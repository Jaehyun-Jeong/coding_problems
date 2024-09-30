#include <iostream>

int main(void){
    int sideDots = 2, n;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        sideDots = sideDots * 2 - 1;
    }

    std::cout << sideDots * sideDots << '\n';
}
