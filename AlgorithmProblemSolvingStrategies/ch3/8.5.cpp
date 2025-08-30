#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool solve(string wildcard, string target){
    if(wildcard.size() == 0 || wildcard == '*') return true;

    if(wildcard[0] == '?')
        solve(
            wildcard.substr(1, wildcard.size()-1),
            target.substr(1, target.size()-1)
        );
    else if(wildcard[0] == '*' && wildcard[1])
}


int main(){

    string wildcard = "he?p";
    int n = 3;
    vector<string> targets = {"help", "heap", "helpp"};

    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    wildcard = "*p*";
    n = 3;
    targets = {"help", "papa", "hello"};

    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    wildcard = "*bb*";
    n = 1;
    targets = {"babbbc"};

    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    return 0;
}
