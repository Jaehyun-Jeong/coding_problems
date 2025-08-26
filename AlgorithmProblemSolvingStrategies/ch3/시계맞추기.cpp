#include <iostream>
#include <vector>
#include <string>
using namespace std;


const int ONEMAX = 3;
const int NUMCLOCKS = 16;


const vector<vector<int>> switchWatch = {
    {0, 1, 2},
    {3, 7, 9, 11},
    {4, 10, 14, 15},
    {0, 4, 5, 6, 7},
    {6, 7, 8, 10, 12},
    {0, 2, 14, 15},
    {3, 14, 15},
    {4, 5, 7, 14, 15},
    {1, 2, 3, 4, 5},
    {3, 4, 5, 9, 13}
};


void printVec(vector<int> vec){
    for(int value: vec)
        cout << value << ' ';
    cout << endl;
}


bool checkClock(vector<int> clocks){
    for(int i = 0; i < NUMCLOCKS; ++i){
        if(clocks[i]%12 != 0)
            return false;
    }
    return true;
}


// check number n is possible
void checkSwitch(vector<int> clocks, vector<int> count){

    bool pass;

    if(checkClock(clocks)){
        printVec(clocks);
        printVec(count);
    }

    for(int i = 0; i < switchWatch.size(); ++i){

        pass = true;
        vector<int> switches = switchWatch[i];

        for(int clockIdx: switches){
            if(count[clockIdx]+1 > 3)
                pass = false;
        }

        if(pass){
            for(int clockIdx: switches){
                count[clockIdx] += 1;
                clocks[clockIdx] += 3;
            }
            checkSwitch(clocks, count);
            for(int clockIdx: switches){
                count[clockIdx] -= 1;
                clocks[clockIdx] -= 3;
            }
        }
    }
}


int main(){

    int C = 2;
    vector<vector<int>> clocks = {
        {12, 6, 6, 6, 6, 6, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12},
        {12, 9, 3, 12, 6, 6, 9, 3, 12, 9, 12, 9, 12, 12, 6, 6}
    };

    for(int c = 0; c < C; ++c){
        vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        checkSwitch(clocks[c], count);
    }

    return 0;
}
