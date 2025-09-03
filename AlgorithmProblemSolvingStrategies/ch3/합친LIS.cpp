#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

void printArr(vector<int> A){
    for(int i = 0; i < A.size(); ++i)
        cout << A[i] << ' ';
    cout << endl;
}


int cache[101][101];
int n = 3, m = 3, k;
int S1[] = {1, 9, 4};
int S2[] = {3, 4, 7};


int length(vector<int> A, vector<int> B){
    int i = 0, j = 0, counter = 0;

    for(int i = 0; i < A.size(); ++i)
        for(int j = 0; j < B.size(); ++j)
            if(A[i] == B[j])
                ++counter;

    return A.size() + B.size() - counter;
}


int lis3(int start1, int start2, vector<int> A, vector<int> B){

    int& ret = cache[start1+1][start2+1];

    if(ret != -1) return ret;

    ret = 1;
    for(int i = start1+1; i < n; ++i)
        if(start1 == -1 || S1[start1] < S1[i]){
            A.push_back(S1[i]);
            B.clear();
            for(int j = start2+1; j < m; ++j){
                if(start2 == -1 || S2[start2] < S2[j]){
                    B.push_back(S2[j]);
                    ret = max(ret, lis3(i, j, A, B) + 1);
                }
            }
        }

    return length(A, B);
}


int main(){

    vector<int> A, B;

    memset(cache, -1, sizeof(cache));

    cout << lis3(-1, -1, A, B) << endl;;

    return 0;
}
