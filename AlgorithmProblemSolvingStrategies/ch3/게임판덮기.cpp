#include <iostream>
#include <vector>
#include <string>
using namespace std;


const vector<vector<<int>> xFill = {{1, 1, 0}, {1, 0, 0}, {0, 0, 1}, {0, 1, 1}};
const vector<vector<<int>> yFill = {{0, 1, 1}, {1, 1, 0}, {1, 0, 0}, {0, 0, 1}};


bool isValid(int value, int min, int max){
    if(value >= min && value < max)
        return true;
    else
        return false;
}


bool setTriangle(int y, int x, vector<vector<init>> filled, int H, int W){
    for(int i = 0; i < 4; ++i){
        if(
            isValid(y + yFill[i][0], 0, H) &&
            isValid(y + yFill[i][1], 0, H) &&
            isValid(y + yFill[i][2], 0, H) &&
            isValid(x + yFill[i][0], 0, W) &&
            isValid(x + yFill[i][1], 0, W) &&
            isValid(x + yFill[i][2], 0, W)
        ){
            return true;
        }
    }
}


void initFilled(vector<vector<int>>& filled, const vector<vector<<int>> board, int H, int W){

    for(int y = 0; y < H; ++y){
        for(int x = 0; x < W; ++x){
            if(board[y][x] == '#')
                filled[y][x] = 1;
            else
                filled[y][x] = 0;
        }
    }
}


bool finished(vector<vector<int>>& filled, int H, int W){

    bool res = true;

    for(int y = 0; y < H; ++y){
        for(int x = 0; x < W; ++x){
            if(filled[y][x] == 0){
                res = false;
                break;
            }
        }
    }

    return res;
}


int count(vector<vector<int>>& filled, const vector<vector<<int>> board, int H, int W){

    if(finished(filled, H, W)) return 1;
    int ret = 0;

    for(int x = 0; x < W-1; ++x){
        for(int y = 0; y < H-1; ++y){
        }
    }

    return 0;
}


int main(){

    int C = 3, H, W;
    vector<vector<int>> filled;
    vector<vector<char>> board;
    vector<vector<vector<char>>> wholeBoard = {
        {
            {'#', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '#'},
            {'#', '#', '.', '.', '.', '#', '#'}
        },
        {
            {'#', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '#'},
            {'#', '#', '.', '.', '#', '#', '#'}
        },
        {
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
        },
    }

    for(int c = 0; c < C; ++c){
        board = wholeBoard[c];
        H = board.size();
        W = board[0].size();
        initFilled(filled, board, H, W);
    }

    return 0;
}
