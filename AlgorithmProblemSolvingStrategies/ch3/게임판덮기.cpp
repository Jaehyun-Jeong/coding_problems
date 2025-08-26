#include <iostream>
#include <vector>
#include <string>
using namespace std;


const int NUMSHAPE = 4;
const vector<vector<int>> xFill = {{1, 1, 0}, {1, 0, 0}, {0, 0, 1}, {0, 1, 1}};
const vector<vector<int>> yFill = {{0, 1, 1}, {1, 1, 0}, {1, 0, 0}, {0, 0, 1}};


bool isValid(int value, int min, int max){
    if(value >= min && value < max)
        return true;
    else
        return false;
}


void setShape(int y, int x, vector<vector<int>>& filled, int H, int W, int setNum){
    filled[y+yFill[setNum][0]][x+xFill[setNum][0]] = 1;
    filled[y+yFill[setNum][1]][x+xFill[setNum][1]] = 1;
    filled[y+yFill[setNum][2]][x+xFill[setNum][2]] = 1;
}


void unsetShape(int y, int x, vector<vector<int>>& filled, int H, int W, int setNum){
    filled[y+yFill[setNum][0]][x+xFill[setNum][0]] = 0;
    filled[y+yFill[setNum][1]][x+xFill[setNum][1]] = 0;
    filled[y+yFill[setNum][2]][x+xFill[setNum][2]] = 0;
}


bool isValidShape(int y, int x, const vector<vector<int>>& filled, int H, int W, int setNum){
    if(
        isValid(y + yFill[setNum][0], 0, H) &&
        isValid(y + yFill[setNum][1], 0, H) &&
        isValid(y + yFill[setNum][2], 0, H) &&
        isValid(x + xFill[setNum][0], 0, W) &&
        isValid(x + xFill[setNum][1], 0, W) &&
        isValid(x + xFill[setNum][2], 0, W) &&
        !filled[y + yFill[setNum][0]][x+xFill[setNum][0]] &&
        !filled[y + yFill[setNum][1]][x+xFill[setNum][1]] &&
        !filled[y + yFill[setNum][2]][x+xFill[setNum][2]]
    ){
        return true;
    } else {
        return false;
    }
}


void initFilled(vector<vector<int>>& filled, const vector<vector<char>> board, int H, int W){

    for(int y = 0; y < H; ++y){
        for(int x = 0; x < W; ++x){
            if(board[y][x] == '#')
                filled[y][x] = 1;
            else
                filled[y][x] = 0;
        }
    }
}


bool finished(const vector<vector<int>> filled, int H, int W){

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


void printFilled(vector<vector<int>> mat){
    for (const auto& row : mat) {
        // Iterate through each element in the current row
        for (const auto& element : row) {
            std::cout << element << " "; // Print the element followed by a space
        }
        std::cout << std::endl; // Move to the next line after printing a row
    }
}


int count(vector<vector<int>> filled, int H, int W, vector<vector<int>> checked){

    bool exit = false;
    int xFirst = -1, yFirst = -1, x, y;
    for(x = 0; x < W-1; ++x){
        for(y = 0; y < H-1; ++y){
            if(!checked[y][x]){
                xFirst = x;
                yFirst = y;
                exit = true;
            }
            if(exit)
                break;
        }
        if(exit)
            break;
    }

    if(finished(filled, H, W)) return 1;
    int ret = 0;

    x = xFirst;
    y = yFirst;
    while(x < W){
        while(y < H){
            checked[y][x] = 1;
            for(int setNum = 0; setNum < NUMSHAPE; ++setNum){
                if(isValidShape(y, x, filled, H, W, setNum)){
                    setShape(y, x, filled, H, W, setNum);
                    ret += count(filled, H, W, checked);
                    unsetShape(y, x, filled, H, W, setNum);
                }
            }
            ++y;
        }
        y = 0;
        ++x;
    }
    return ret;
}


int main(){

    int C = 3, H, W;
    vector<int> temp;
    vector<vector<int>> filled, checked;
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
        }
    };

    for(int c = 0; c < C; ++c){
        board = wholeBoard[c];
        H = board.size();
        W = board[0].size();
        filled.clear();
        checked.clear();
        temp.clear();

        for(int x = 0; x < W; ++x){
            temp.push_back(0);
        }
        for(int y = 0; y < H; ++y){
            filled.push_back(temp);
            checked.push_back(temp);
        }

        initFilled(filled, board, H, W);
        cout << count(filled, H, W, checked) << endl;
    }

    return 0;
}
