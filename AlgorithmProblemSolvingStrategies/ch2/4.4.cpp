#include <iostream>
#include <vector>
using namespace std;

vector<double> movingAverage2(
    const vector<double>& A,
    int M
){
    vector<double> ret;
    int N = A.size();
    double partialSum = 0;

    for(int i = 0; i < M-1; ++i)
        partialSum += A[i];

    for(int i = M-1; i < N; ++i){
        partialSum += A[i];
        ret.push_back(partialSum / M);
        partialSum -= A[i-M+1];
    }

    return ret;
}

int main(){

    vector<double> A = {1, 1, 1, 1, 2, 3, 3, 3, 101, 101, 101, 101, 101}, res;

    res = movingAverage2(A, 3);

    for(int i = 0; i < A.size(); ++i)
        cout << A[i] << ' ';
    cout << endl;
    for(int i = 0; i < A.size() - 2; ++i)
        cout << res[i] << ' ';
    cout << endl;

    return 0;
}
