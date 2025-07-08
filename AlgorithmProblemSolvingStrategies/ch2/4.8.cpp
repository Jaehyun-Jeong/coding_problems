#include <iostream>
#include <vector>
using namespace std;

// selection sort
void selectionSort(vector<int>& A){
    for(int i = 0; i < A.size(); ++i){
        int minIndex = i;
        for(int j = i+1; j < A.size(); ++j){
            if(A[minIndex] > A[j])
                minIndex = j;
        }
        swap(A[i], A[minIndex]);
    }
}

// insertion sort
void insertSort(vector<int>& A){
    for(int i = 0; i < A.size(); ++i){
        int j = i;
        while(j > 0 && A[j-1] > A[j]){
            swap(A[j-1], A[j]);
            --j;
        }
    }
}

int main(){
    vector<int> array = {1, 3, 5, 11, 20};


    for(int i = 0; i < 10; ++i)
        cout << i << endl;

    return 0;
}
