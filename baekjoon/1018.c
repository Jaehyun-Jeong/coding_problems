#include <stdio.h>
#define MAXSTRINGSIZE 100

int main(){

    int row, col, chessRow = 8, chessCol = 8, minDiff = 8*8, diff;
    char fullBoard[MAXSTRINGSIZE][MAXSTRINGSIZE];
    char board[8][8] = {
        {"BWBWBWBW"},
        {"WBWBWBWB"},
        {"BWBWBWBW"},
        {"WBWBWBWB"},
        {"BWBWBWBW"},
        {"WBWBWBWB"},
        {"BWBWBWBW"},
        {"WBWBWBWB"}
    };

    scanf("%d %d", &row, &col);

    for(int i = 0; i < row; i++){
        scanf("%s", fullBoard[i]);
    }

    for(int i = 0; i < row - chessRow + 1; i++){
        for(int j = 0; j < col - chessCol + 1; j++){
            diff = 0;
            for(int k = 0; k < chessRow; k++){
                for(int l = 0; l < chessCol; l++){
                    if(board[k][l] != fullBoard[i+k][j+l])
                        diff++;
                }
            }

            if(chessRow * chessCol - diff < diff)
                diff = chessRow * chessCol - diff;
            if(diff < minDiff)
                minDiff = diff;
        }
    }

    printf("%d\n", minDiff);

    return 0;
}
