#include <iostream>
#include <cmath>

#define ALGAP 55
#define NUMGAP 48

int main(void){
    char ans[100];
    int num, B, counter = 0, tempNum;

    std::cin >> num >> B;

    while(pow(B, ++counter) <= num);

    for(int j = 0, i = counter-1; i >= 0; j++, i--){
        tempNum = num / pow(B, i);
        num -= tempNum * pow(B, i);
        
        if(tempNum > 9){
            ans[j] = char(tempNum + ALGAP);
        }
        else{
            ans[j] = char(tempNum + NUMGAP);
        }
    }
    ans[counter] = '\0';

    std::cout << ans << '\n';
}
