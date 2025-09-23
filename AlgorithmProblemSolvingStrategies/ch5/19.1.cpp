#include <iostream>
using namespace std;


vector<int> h;

int solveStack(){
    stack<int> remaining;
    h.push_back(0);
    int ret = 0;
    for(int i = 0; i < h.size(); ++i){
        while(!remaining.empty() && h[remaining.top()] >= h[i]){
            int j = remaining.top();  // Save last element in remaining
            remaining.pop();  // Delete last element in remaining
            int width = -1;
            if(remaining.empty())
                width = i;
            else
                width = (i - remaining.top() - 1);
            ret = max(ret, h[j] * width);
        }
        remaining.push(i);
    }

    return ret;
}


int main(){
    return 0;
}
