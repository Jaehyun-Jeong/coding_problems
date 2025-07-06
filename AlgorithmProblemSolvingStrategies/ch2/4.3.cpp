#include <iostream>
#include <vector>
using namespace std;

vector<double> movingAverage1(
    const vector<double>& A,
    const int M
){
    vector<double> ret;
    int N = A.size();
    for(int i = M-1; i < N; ++i){
        double partialSum = 0;
        for(int j = 0; j < M; ++j)
            partialSum += A[i-j];
        ret.push_back(partialSum / M);
    }
    return ret;
}

int main(){

    vector<double> A = {1, 1, 1, 1, 2, 3, 3, 3, 101, 101, 101, 101, 101}, res;

    res = movingAverage1(A, 3);

    for(int i = 0; i < A.size(); ++i)
        cout << A[i] << ' ';
    cout << endl;
    for(int i = 0; i < A.size() - 2; ++i)
        cout << res[i] << ' ';
    cout << endl;

    return 0;
}
