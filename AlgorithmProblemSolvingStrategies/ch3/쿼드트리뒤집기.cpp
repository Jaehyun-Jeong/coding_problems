#include <iostream>
#include <vector>
#include <string>
using namespace std;

// x xwwwb xwxwbbbww xxxwwbbbwwwwb b
// x xwbww xwxwbbbww xxxwwbbbwwwwb b
// x xwbww xwxbbwbww xxxwwbbbwwwwb b
// x xwbww xwwwxbbwb xxxwwbbbwwwwb b
// x xwbww xwwwxbbwb xxxbbwwbwwwwb b
// x xwbww xwwwxbbwb xxwwxbbwwbwwb b
// x xwbww xwwwxbbwb xwbxwwxbbwwbw b
// x xwbxwwxbbwwbw b xwbww xwwwxbbwb 


void flipChunk(string& a, int start, int half, int end){

    string ret;

    ret += a.substr(half + 1, end - half);
    ret += a.substr(start, half - start + 1);

    a.replace(start, ret.size(), ret);  
}


void flipAll(string& a, int& i){

    if(a.size() < 4) return;

    int start = i, half, end, counter = 0;

    while(counter < 4 && i < a.size()){
        ++counter;
        if(a[i] == 'x'){
            ++i;
            flipAll(a, i);
            --i;
        }
        if(counter == 2){
            half = i;
        }
        if(counter == 4){
            end = i; 
            flipChunk(a, start, half, end);
        }
        ++i;
    }
}


int main(){
    string a = "xxwwwbxwxwbbbwwxxxwwbbbwwwwbb";
    int i = 0;
    flipAll(a, i);
    cout << a << endl;
}
