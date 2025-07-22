#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
const int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool hasWord(int y, int x, const string& word){
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
    vector<int> picked;

    pick(7, picked, 4);

    return 0;
}
