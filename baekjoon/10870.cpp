#include <iostream>

int Fibonacci(int fstNum, int sndNum, int stepNum){
    int temp;
    
    stepNum--;
    temp = fstNum + sndNum;
    fstNum = sndNum;
    sndNum = temp;
    
    if(stepNum > 0){
        return Fibonacci(fstNum, sndNum, stepNum);
    }
    else{
        return sndNum;
    }
}

int main(void){
    int F0 = 0, F1 = 1, stepNum;
    
    std::cin >> stepNum;

    if(stepNum == 0){
        std::cout << F0 << '\n';
    }
    else{
        std::cout << Fibonacci(F0, F1, stepNum - 1) << '\n';
    }
}
