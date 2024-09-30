#include <iostream>
int main(){
    int a, b;
    int A[3], B[3];
    std::cin >> a >> b;
    A[0] = a/100;
    a -= A[0]*100;
    A[1] = a/10;
    a -= A[1]*10;
    A[2] = a;
    B[0] = b/100;
    b -= B[0]*100;
    B[1] = b/10;
    b -= B[1]*10;
    B[2] = b;
    a = 0;
    for(int i = 3; i--;){
        if(A[i] > B[i]){
            a = 1;
            break;
        }
        else if(A[i] < B[i]) break;
    }
    if(a) std::cout << A[2] << A[1] << A[0];
    else std::cout << B[2] << B[1] << B[0];
}
