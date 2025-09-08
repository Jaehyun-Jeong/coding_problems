#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


int countCache[100][100];
int count(int y, int x){
    if(y == n-1) return 1;

    int& ret = countCache[y][x];
    if(ret != -1) return ret;

    ret = 0;
    if(path2(y+1, x+1) >= path2(y+1, x)) ret += count(y+1, x+1);
    if(path2(y+1, x+1) <= path2(y+1, x)) ret += count(Y+1, x);

    return ret;
}


int main(){
    return 0;
}
