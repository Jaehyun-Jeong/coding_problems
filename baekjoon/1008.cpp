#include <iostream>
#include <iomanip>

int main(){
    int number1, number2;

    std::cin >> number1 >> number2;
    std::cout << std::setprecision(10) << (double) number1 / (double) number2;

    return 0;
}
