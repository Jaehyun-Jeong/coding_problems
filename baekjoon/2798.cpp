#include <iostream>

#define MAXCARD 100000

int main(void){
    int n, m, cards[MAXCARD], ans = 0, sum;

    std::cin >> n >> m;
    for(int i = 0; i < n; i++){
        std::cin >> cards[i];
    }

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                sum = cards[i] + cards[j] + cards[k];
                if(m >= sum && ans < sum)
                    ans = sum;
            }
        }
    }

    std::cout << ans << '\n';
}
