#include <iostream>
int main(void){
    double C, S = 0, CS = 0;
    char N[51], G[3];
    for(int i = 0; i < 20; i++){
        std::cin >> N >> C >> G;
        CS += C;
        switch(G[0]){
            case 'A':
                S += C * 4;
                break;
            case 'B':
                S += C * 3;
                break;
            case 'C':
                S += C * 2;
                break;
            case 'D':
                S += C * 1;
                break;
            case 'P':
                CS -= C;
                break;
        }
        if(G[1] == '+') S += C * 0.5;
        std::fill(G, G+2, 0);
    }
    std::cout << S / CS;
}
