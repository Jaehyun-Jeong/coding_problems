#include <iostream>
#include <vector>
using namespace std;

void test(int n, int m, vector<int> numbers){
    if(m == 0){
        for(const int& value : numbers)
            cout << value << ' ';
        cout << endl;
    } else {
        for(int i = 1; i <= n - m + 1; ++i){
            numbers[m-1] = i;
            test(n-i, m-1, numbers);
        }
    }
}

int main(){

    int A = 10;
    vector<int> numbers = {1, 2, 3, 4};

    test(7, 4, numbers);

    return 0;
}
