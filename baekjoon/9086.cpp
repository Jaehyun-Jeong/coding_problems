#include <iostream>
int main(){
    int T, i;
    char **S;
    std::cin >> T;
    S = new char *[T+1];
    S[T] = new char [1000];
    for(int j=T; j--;){
        i = 0;
        std::fill(S[T], S[T]+1000, 0);
        S[j] = new char [3];
        std::cin >> S[T];
        while(S[T][i++]!='\0'){}
        S[j][0] = S[T][0];
        S[j][1] = S[T][i-2];
    }
    while(T--) std::cout << S[T][0] << S[T][1] << '\n';
}
