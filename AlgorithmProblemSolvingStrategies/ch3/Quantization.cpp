#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;


int cache[100][10];
int used[1000];
int MAX = 987654321;
int n, s;
vector<int> A;


void print(vector<int> vec){
    for(int i = 0; i < vec.size(); ++i)
        cout << vec[i] << ' ';
    cout << endl;
}


int MSE(int start, int end){
    double floatMean = 0;
    int mse = 0, mean, i, j;

    for(int i = start; i <= end; ++i)
        floatMean += A[i];
    floatMean /= (end - start + 1);
    mean = round(floatMean);

    if(used[mean]){
        mean = MAX;
        for(int i = 1; i <= 1000; ++i)
            if(!used[i] && (abs(i - floatMean) < abs(mean - floatMean)))
                mean = i;
    }

    if(used[mean]){
        i = max(0, mean - 1);
        j = min(1000, mean + 1);
        while(!used[i] || !used[j]){
            --i;
            ++j;
        }
        if((!used[i] && !used[j]) && (floatMean - i) > (j - floatMean))
            mean = i;
    }

    used[mean] = 1;

    for(int i = start; i <= end; ++i)
        mse += pow(abs(A[i] - mean), 2);

    return mse;
}


int quantize(int start, int numDivision){

    int& ret = cache[start][numDivision];

    if(ret != -1)
        return ret;

    if(numDivision == 1)
        return ret = MSE(start, A.size()-1);

    ret = MAX;
    for(int i = start; i < A.size()-numDivision; ++i)
        ret = min(ret, MSE(start, i) + quantize(i+1, numDivision-1));

    return ret;
}

int solve(vector<int> B){
    sort(B.begin(), B.end());
    A = B;
    memset(used, 0, sizeof(used));
    memset(cache, -1, sizeof(cache));

    cout << quantize(0, s) << endl;

    return 0;
}


int main(){

    n = 10, s = 3;
    vector<int> B = {3, 3, 3, 1, 2, 3, 2, 2, 2, 1};
    solve(B);

    n = 9, s = 3;
    B = {1, 744, 755, 4, 897, 902, 890, 6, 777};
    solve(B);

    return 0;
}
