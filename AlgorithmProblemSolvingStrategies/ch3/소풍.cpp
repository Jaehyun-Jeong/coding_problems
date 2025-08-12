#include <iostream>
#include <vector>
#include <string>
using namespace std;


int factorial(int n){
    int ans = 1;
    for(int i = 2; i <= n; ++i)
        ans *= i;
    return ans;
}


bool isCombOkay(vector<int> selected, vector<int> close, int numCandidates){

    vector<int> pair;

    for(int num : selected){
        pair.push_back(close[2*num]);
        pair.push_back(close[2*num+1]);
    }
    
    for(int i = 0; i < numCandidates-1; ++i){
        for(int j = i+1; j < numCandidates; ++j){
            if(pair[i] == pair[j])
                return false;
        }
    }

    return true;
}


void countComb(
    vector<int> selected,
    vector<int> candidates,
    int numCandidates,
    vector<int> close,
    int numClose,
    int& count
){

    vector<int> tempCandidates;
    vector<int> tempSelected;

    if(selected.size()==int(numCandidates/2) && isCombOkay(selected, close, numCandidates)){
        count++;
    }

    for(int i = 0; i < numClose; ++i){

        tempSelected = selected;
        tempSelected.push_back(candidates[i]);

        tempCandidates = candidates;
        tempCandidates.erase(
            tempCandidates.begin() + i
        );

        countComb(tempSelected, tempCandidates, numCandidates, close, numClose-1, count);
    }
}


bool isClose(vector<int> close, int s1, int s2){

    for(int i = 0; i < close.size(); i = i + 2){
        if(s1 == close[i] && s2 == close[i+1])
            return true;
        if(s2 == close[i] && s1 == close[i+1])
            return true;
    } 

    return false;
}


int main(){

    int C, numStudents, count, numClose, temp;
    vector<int> close, closeCandidates, selected;
    
    cin >> C;

    while(C){

        cin >> numStudents >> numClose;

        close.clear();
        closeCandidates.clear();
        count = 0;

        for(int i = 0; i < numClose; ++i){
            closeCandidates.push_back(i);
        }

        for(int i = 0; i < 2*numClose; ++i){
            cin >> temp;
            close.push_back(temp);
        }

        countComb(selected, closeCandidates, numStudents, close, numClose, count);
        count = count / factorial(int(numStudents/2));

        cout << "result: " << count << endl;

        --C;
    }
}
