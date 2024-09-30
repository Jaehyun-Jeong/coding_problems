#include <iostream>

int d(int n){
    int a, b, c, d;
    a = n;
    b = a/1000;
    a -= b*1000;
    c = a/100;
    a -= c*100;
    d = a/10;
    a -= d*10;
    return n + a + b + c + d;
}

int main(){
    int A[10000] = {}, D;
    for (int i = 1; i <= 10000; i++){
        D = d(i);
        if (D <= 10000) A[D-1]++;
    }
    for (int i = 0; i < 10000; i++){
        if (A[i] == 0) std::cout << i+1 << '\n';
    }
}
