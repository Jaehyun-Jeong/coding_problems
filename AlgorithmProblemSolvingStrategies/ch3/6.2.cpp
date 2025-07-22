#include <iostream>
#include <vector>
using namespace std;

void printPicked(const vector<int> picked){
    for(const int& value : picked)
        cout << value << ' ';
    cout << endl;
}

void pick(int n, vector<int>& picked, int toPick){
    if(toPick == 0){
        printPicked(picked);
        return;
    }

    int smallest = picked.empty() ? 0 : picked.back() + 1;

    for(int next = smallest; next < n; ++next){
        picked.push_back(next);
        pick(n, picked, toPick - 1);
        picked.pop_back();
    }
}

int main(){

    int A = 10;
    vector<int> picked;

    pick(7, picked, 4);

    return 0;
}
