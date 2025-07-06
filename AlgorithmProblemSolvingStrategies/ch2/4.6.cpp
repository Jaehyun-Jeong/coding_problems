#include <iostream>
#include <vector>
using namespace std;

// Return factorization result as an array
vector<int> factor(int n){
    if(n == 1) return vector<int>(1, 1);
    vector <int> ret;

    for(int div = 2; n > 1; ++div){
        while(n % div == 0){
            n /= div;
            ret.push_back(div);
        }
    }

    return ret;
}

int main(){
    vector<int> res;

    res = factor(11);
    for(int i: res)
        cout << i << ' ';
    cout << endl;

    res = factor(111);
    for(int i: res)
        cout << i << ' ';
    cout << endl;
}
