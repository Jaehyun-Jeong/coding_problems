#include <iostream>
int main(){
    int A, B, C, n = 1;
    std::cin >> A >> B >> C;
    if(C == B || A/(C-B)<0) std::cout << -1;
    else std::cout << A/(C-B)+1;
}
