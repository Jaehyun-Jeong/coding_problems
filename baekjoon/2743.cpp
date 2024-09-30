#include <iostream>
int main(){
    char S[101];
    int i=0;
    std::cin >> S;
    while(S[i++]!='\0'){}
    std::cout << i-1;
}
