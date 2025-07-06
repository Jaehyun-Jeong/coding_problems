#include <iostream>
#include <vector>
using namespace std;

const int INF = 987654321;

// Check eatible
bool canEveryoneEat(const vector<int>& menu);
// The nuumber of foods I can cook
int M;

int selectMenu(vector<int>& menu, int food){

    // NOTE: In the leaf node, check that menu is eatible
    if(food == M){
        if(canEveryoneEat(menu)) return menu.size();

        return INF;  // No one can eat;
    }

    // NOTE: Create every possible combination of foods
    // When this food is not accepted
    int ret = selectMenu(menu, food+1);

    menu.push_back(food);
    ret = min(ret, selectMenu(menu, food+1));
    menu.pop_back();

    return ret;
}

int main(){
    return 0;
}
