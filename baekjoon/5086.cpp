#include <iostream>

int main(void){
    int num1 = 10, num2 = 10;

    std::cin >> num1 >> num2;
    while (num1 + num2 != 0){
        std::cout << ((num2 % num1) ? (num1 % num2) ? "neither\n" : "multiple\n" : "factor\n");
        std::cin >> num1 >> num2;
    }
}
