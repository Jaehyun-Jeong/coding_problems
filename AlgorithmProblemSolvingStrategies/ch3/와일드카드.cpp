#include <iostream>
#include <vector>
#include <string>
using namespace std;


// if "***hhh*"
// *
// *
// *hhh
// *
int findPattern(string pattern, string target){
    string str;
    int lenMatch;

    if(pattern == "*")
        return 0;

    if(pattern[0] == '*'){

        str = pattern.substr(1, pattern.size()-1);
        if(str.size() > target.size())
            return -1;

        lenMatch = 0;
        for(int i = 0; i < target.size(); ++i){
            if(str[lenMatch] == target[i] || str[lenMatch] == '?')
                ++lenMatch;
            else
                lenMatch = 0;

            if(lenMatch == str.size())
                return i+1;
        }

        return -1;

    } else {

        if(pattern.size() != target.size())
            return -1;

        for(int i = 0; i < pattern.size(); ++i)
            if(pattern[i] != target[i] && pattern[i] != '?')
                return -1;

        return pattern.size();
    }
}


bool solve(string wildcard, string target){

    string pattern;
    int start = 0, startTarget = 0, diff;

    for(int i = 1; i < wildcard.size(); ++i){
        if(wildcard[i] == '*' || i == wildcard.size()-1){

            if(wildcard[i] != '*')
                pattern = wildcard.substr(start, i+1-start);
            else
                pattern = wildcard.substr(start, i-start);

            diff = findPattern(
                pattern,
                target.substr(startTarget, target.size()-startTarget)
            );

            if(diff < 0)
                return false;

            startTarget += diff;
            start = i+1;
        }
    }

    return true;
}


int main(){

    // 예제 1: 단일 ? 매칭
    string wildcard = "he?p";
    int n = 3;
    vector<string> targets = {"help", "heap", "helpp"};
    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    // 예제 2: 접두사/접미사 * 매칭
    wildcard = "*p*";
    n = 3;
    targets = {"help", "papa", "hello"};
    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    // 예제 3: 중간 부분 * 매칭
    wildcard = "*bb*";
    n = 2;
    targets = {"babbbc", "ab"};
    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    // 예제 4: 전체 * 매칭 (아무 문자열도 가능)
    wildcard = "*";
    n = 3;
    targets = {"a", "abc", ""};
    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    // 예제 5: 여러 ? 포함
    wildcard = "??llo";
    n = 3;
    targets = {"ello", "cello", "yello"};
    for(int i = 0; i < n; ++i)
        if(solve(wildcard, targets[i]))
            cout << targets[i] << endl;

    return 0;
}
