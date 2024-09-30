#include <iostream>
int main(){
    char N[101];
    int A[26], n = 0;
    std::fill(A, A + sizeof(A)/4, -1);
    std::cin >> N;
    for (char w: N){
        if (97 > int(w) || int(w) > 122) break;
        if (A[int(w)-97] == -1) A[int(w)-97] = n;
        n++;
    }
    for (int a: A) std::cout << a << ' ';
}
