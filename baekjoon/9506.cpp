#include <iostream>
#include <cmath>

int main(void){
    int n, sum, divisors[10000], counter;
    
    std::cin >> n;
    while(n != -1){
        sum = 0;
        counter = 0;
        for(int divisor = 1; divisor <= floor(n / 2); divisor++){
            if(!(n % divisor)){
                sum += divisor;
                divisors[counter++] = divisor;
            }
        }
        if(sum == n){
            std::cout << n << " = ";
            for(int i = 0; i < counter-1; i++){
                std::cout << divisors[i] << " + ";
            }
            std::cout << divisors[counter-1] << '\n';
        }
        else{
            std::cout << n << " is NOT perfect.\n";
        }
        std::cin >> n;
    }
}
