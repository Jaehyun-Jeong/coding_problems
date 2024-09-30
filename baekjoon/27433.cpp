#include <iostream>

#define MAX 20

long int factorial(long int mulNum, int num){
    num--;
    if(num >= 0){
        mulNum /= (MAX - num);
        return factorial(mulNum, num);
    }
    else{
        return mulNum;
    }
}

int main(void){
    long int mulNum = 2432902008176640000;
    int N;

    std::cin >> N;
    mulNum = factorial(mulNum, MAX - N);
    std::cout << mulNum << '\n';
}
