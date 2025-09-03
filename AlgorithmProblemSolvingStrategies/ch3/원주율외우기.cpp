#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


int cache[10001];
vector<int> vecA;
int MAX = 50000;


void print(vector<int> A){
    for(int i = 0; i < A.size(); ++i)
        cout << A[i] << ' ';
    cout << endl;
}


vector<int> strToVec(string A){
    vector<int> ret;

    for(int i = 0; i < A.size(); ++i){
        ret.push_back(int(A[i]) - int('0'));
    }

    return ret;
}


int cost(vector<int> A){
    bool pass = true;
    int ret, diff;

    diff = A[1] - A[0];

    for(int i = 1; i < A.size()-1; ++i){
        if(diff != A[i+1] - A[i]){
            pass = false;
            break;
        }
    }

    if(diff == 0)
        ret = 1;
    else if(abs(diff) == 1)
        ret = 2;
    else if(abs(diff) > 1)
        ret = 5;

    if(pass)
        return ret;

    ret = 4;
    for(int i = 0; i < A.size()-2; ++i){
        if(A[i] != A[i+2])
            ret = 10;
    }

    return ret;
}


int memPi(int start){

    int& ret = cache[start];
    int tmpCost;
    vector<int> tmpVec;

    if(ret != -1) return ret;

    if(vecA.size() - start < 6){
        tmpVec.resize(vecA.size() - start);
        copy(
            vecA.begin() + start,
            vecA.end(),
            tmpVec.begin()
        );
        ret = cost(tmpVec);

        return ret;
    }

    ret = MAX;
    for(int i = 3; i < 6; ++i){
        tmpVec.resize(i);
        copy(
            vecA.begin() + start,
            vecA.begin() + start + i,
            tmpVec.begin()
        );
        tmpCost = cost(tmpVec);

        ret = min(ret, tmpCost + memPi(start+i));
    }

    return ret;
}

int solve(string A){
    vecA = strToVec(A);
    memset(cache, -1, sizeof(cache));
    return memPi(0);
}


int main(){

    string A = "12341234";
    cout << solve(A) << endl;

    A = "11111222";
    cout << solve(A) << endl;

    A = "12122222";
    cout << solve(A) << endl;

    A = "22222222";
    cout << solve(A) << endl;

    A = "12673939";
    cout << solve(A) << endl;

    return 0;
}
