#include <iostream>
int main(){
    int n = 0;
    char* L = new char[1000005];
    std::cin.getline(L, 1000005);
    for(int i = 1; i < 1000005; i++){
        if(L[i-1] != ' ' && L[i] == ' ' && L[i+1] != ' ') n++;
        else if(int(L[i]) == 0 && L[i-1] != ' ') n++;
        if(int(L[i]) == 0) break;
    }
    std::cout << n;
}
