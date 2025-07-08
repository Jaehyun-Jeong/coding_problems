#include <iostream>
#include <vector>
using namespace std;

// Find an index of the value
// if the value does not exist, then return -1
int firstIndex(const vector<int>& array, int element){
    for(int i = 0; i < array.size(); ++i){
        if(array[i] == element)
            return i;
    }

    return -1;
}

int main(){
    vector<int> array = {1, 3, 5, 11, 20};
    int res;

    res = firstIndex(array, 11);

    cout << res << endl;
}
