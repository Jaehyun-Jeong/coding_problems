#include <iostream>
int main(void){

    char board[5][16]{};
    char ans[76];
    int n;

    for(int i = 0; i < 5; i++){
        std::cin >> board[i];
    }

    n = 0;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(board[j][i]){
                ans[n] = board[j][i];
                std::cout << ans[n];
                n++;
            }
        }
    }
}
