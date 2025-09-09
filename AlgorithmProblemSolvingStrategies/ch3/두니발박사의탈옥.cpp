#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


const int MOD = 10*1000*1000;
int cache[101][101];


void printVec(vector<vector<double>> A){
    int numRow = A.size(), numCol = A[0].size();

    cout << "start=================================" << endl;
    for(int row = 0; row < numRow; ++row){
        for(int col = 0; col < numCol; ++col)
            cout << A[row][col] << ' ';
        cout << endl;
    }
    cout << "end===================================" << endl;
}


vector<vector<double>> matMul(vector<vector<double>> A, vector<vector<double>> B){
    vector<vector<double>> ret = {};
    vector<double> tmpVec;
    double tmp;
    int numRow = A.size(), numCol = A[0].size();

    for(int row = 0; row < numRow; ++row){
        tmpVec = {};
        for(int col = 0; col < numCol; ++col){
            tmp = 0;
            for(int i = 0; i < numRow; ++i)
                tmp += A[row][i] * B[i][col];
            tmpVec.push_back(tmp);
        }
        ret.push_back(tmpVec);
    }

    return ret;
}

void AdjacencyToProbability(vector<vector<double>>& A){
    int numRow = A.size(), numCol = A[0].size(), count;
    
    for(int col = 0; col < numCol; ++col){
        count = 0;
        for(int row = 0; row < numRow; ++row){
            if(A[row][col] == 1.0)
                ++count;
        }
        for(int row = 0; row < numRow; ++row){
            if(A[row][col] == 1.0)
                A[row][col] = 1.0 / count;
        }
    }
}


void solve(int N, int D, int P, vector<vector<double>> A){
    vector<vector<double>> tmp;

    AdjacencyToProbability(A);
    tmp = A;

    while(D--){
        printVec(A);
        A = matMul(A, tmp);
    }
    printVec(A);
}


int main(){

    int N = 5;
    int D = 2;
    int P = 0;
    int T = 3;
    vector<vector<double>> A = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };
    vector<int> B = {0, 2, 4};

    solve(N, D, P, A);

    N = 8;
    D = 2;
    P = 3;
    T = 4;
    A = {
        {0, 1, 1, 1, 0, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 1, 1},
        {0, 0, 0, 1, 0, 0, 0, 1},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0}
    };
    B = {3, 1, 2, 6};

    solve(N, D, P, A);

    return 0;
}
