#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
const int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool hasWord(int y, int x, const string& word, const vector<vector<char>> board){

    if(!inRange(y, x)) return false;

    if(board[y][x] != word[0]) return false;

    if(word.size() == 1) return true;

    for(int direction = 0; direction < 8; ++direction){
        int nextY = y + dy[direction], nextX = x + dx[direction];
        if(hasWord(nextY, nextX, word.substr(1)))
            return true;
    }

    return false;
}

int main(){

    // Check PRETTY
    string AAns = "PRETTY";
    string ADum = "YES";
    vector<vector<char>> A = {
        {'U', 'R', 'L', 'P','M'},
        {'X', 'P', 'R', 'E','T'},
        {'G', 'I', 'A', 'E','T'},
        {'X', 'T', 'N', 'Z','Y'},
        {'X', 'O', 'Q', 'R','S'}
    };
    // Check YES
    string BAns = "YES";
    string BDum = "PRETTY";
    vector<vector<char>> B = {
        {'N', 'N', 'N', 'N','S'},
        {'N', 'E', 'E', 'E','N'},
        {'N', 'E', 'Y', 'E','N'},
        {'N', 'E', 'E', 'E','N'},
        {'N', 'E', 'E', 'E','N'},
    };

    bool ans = false;
    for(int y = 0; y < 5; ++y){
        for(int x = 0; x < 5; ++x){
            if(hasWord(y, x, BDum, B)){
                ans = true;
                cout << y << ' ' << x << endl;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
