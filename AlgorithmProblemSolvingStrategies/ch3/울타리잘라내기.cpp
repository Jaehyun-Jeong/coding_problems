#include <iostream>
#include <vector>
#include <string>
using namespace std;


int maxArea(const vector<int> plates, int n, int height){
    int maxWidth = 0, tmpWidth = 0;

    for(int i = 0; i < n; ++i){
        if(plates[i] >= height){
            ++tmpWidth;
        } else {
            if(tmpWidth > maxWidth)
                maxWidth = tmpWidth;
            tmpWidth = 0;
        }
    } 
    if(tmpWidth > maxWidth)
        maxWidth = tmpWidth;

    return maxWidth * height;
}


int check(const vector<int> plates, int n){

    vector<bool> checked(10000);
    int ret = 0, tmpMaxArea;

    for(int i = 0; i < n; ++i){
        if(!checked[plates[i]]){
            checked[plates[i]] = true;
            tmpMaxArea = maxArea(plates, n, plates[i]);
            if(tmpMaxArea > ret)
                ret = tmpMaxArea;
        }
    }

    return ret;
}


int main(){
    
    int n = 7;
    vector<int> plates = {7, 1, 5, 9, 6, 7, 3};

    cout << check(plates, n) << endl;

    n = 7;
    plates = {1, 4, 4, 4, 4, 1, 1};

    cout << check(plates, n) << endl;

    n = 4;
    plates = {1, 8, 2, 2};

    cout << check(plates, n) << endl;

    return 0;
}
