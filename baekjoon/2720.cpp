#include <iostream>
#include <cmath>

#define QUARTER 25
#define DIME 10
#define NICKEL 5

int main(void){
    int n, num, counters[3];

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> num;
        counters[0] = num / QUARTER;
        num -= QUARTER * counters[0];
        counters[1] = num / DIME;
        num -= DIME * counters[1];
        counters[2] = num / NICKEL;
        num -= NICKEL * counters[2];
        std::cout << counters[0] << ' ' << counters[1] << ' ' << counters[2] << ' ' << num << '\n';
    }
}
