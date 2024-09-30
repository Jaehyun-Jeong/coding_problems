#include <iostream>
#include <cmath>

#define ALGAP 55
#define NUMGAP 48

int main(void){
    char BNum[100];
    int B, Counter = 0, ans = 0;
    
    std::cin >> BNum >> B;

    while(BNum[Counter++] != 0);
    Counter--;

    for(int i = Counter-1; i >= 0; i--){
        if(BNum[i] >= 'A' && BNum[i] <= 'Z'){
            ans += pow(B, Counter - i - 1) * (int(BNum[i]) - ALGAP);
        }
        else if(BNum[i] >= '0' && BNum[i] <= '9'){
            ans += pow(B, Counter - i - 1) * (int(BNum[i]) - NUMGAP);
        }
    }
    
    std::cout << ans << '\n';
}
