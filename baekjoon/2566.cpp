#include <iostream>
int main(void){
    unsigned short grid[9][9], row, col, biggest = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            std::cin >> grid[i][j];
            if(grid[i][j] > biggest){
                row = i;
                col = j;
                biggest = grid[i][j];
            }
        }
    }
    std::cout << biggest << '\n' << row+1 << ' ' << col+1;
}
