#include <iostream>
#include <memory.h>
int main(){
    int N, n = 0, M[26]={0};
    char L[101], l = '0';
    std::cin >> N;
    while(N--){
        std::cin >> L;
        n++;
        for(char w: L){
            if(int(w) == 0) break;
            else if(M[int(w)-97] == 0 && l != w) M[int(w)-97] = 1;
            else if(M[int(w)-97] == 1 && l != w){
                n--;
                break;
            }
            l = w;
        }
        memset(L, 0, 101);
        memset(M, 0, 26);
        l = '0';
    }
    std::cout << n;
}
