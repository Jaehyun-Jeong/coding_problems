#include <iostream>

bool f(int n){
    if (n == 1000) return false;
    else{
        int a, b;
        a = n/100;
        n -= 100*a;
        b = n/10;
        n -= 10*b;
        if(a == 0) return true;
        else{
            if(a-b == b-n) return true;
            else return false;
        }
    }
}

int main(){
    int N, c = 0;
    std::cin >> N;
    while(N--){
        if (f(N+1)) c++;
    }
    std::cout << c;
}
