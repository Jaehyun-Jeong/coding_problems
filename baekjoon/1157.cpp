#include <iostream>
int main(){
    char* L = new char[1000001];
    int C[26]={0}, D = 0, F;
    std::cin >> L;
    for(int i = 0; i < 1000000; i++){
        if(64<int(L[i]) && int(L[i])<91) C[int(L[i])-65]++;
        else if(96<int(L[i]) && int(L[i])<123) C[int(L[i])-97]++;
        else break;
    }
    for(int i = 0; i < 26; i++){
        if(D<C[i]){
            D = C[i];
            F = i;
        }
        else if (D == C[i]) F = -2;
    }
    std::cout << char(F+65) << '\n';
}
