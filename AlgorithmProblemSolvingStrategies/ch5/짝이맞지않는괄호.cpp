#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stack>
using namespace std;


void printStack(stack<char> s){
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}


// e.g.
// ()()
// ({[}])
// ({}[(){}])
// Use two stacks
// ({}[(){}]) => save '(', '{', '['
// check pairs '{', '}', remove checked elements
// return false if the match is wrong
string solve(string s){
    stack<char> sStack, opens;

    if(s.size() % 2 == 1)
        return "NO";

    for (char c : s)
        sStack.push(c);

    while(!sStack.empty() || !opens.empty()){
        if(sStack.top() == ')' || sStack.top() == '}' || sStack.top() == ']'){
            opens.push(sStack.top());
            sStack.pop();
        } else if(sStack.top() == '(' || sStack.top() == '{' || sStack.top() == '['){
            if(opens.empty())
                return "NO";
            if((sStack.top() == '(' && opens.top() == ')') ||
                (sStack.top() == '{' && opens.top() == '}') ||
                (sStack.top() == '[' && opens.top() == ']')){
                sStack.pop();
                opens.pop();
            } else
                return "NO";
        } else
            sStack.pop();
        
        // One side empty
        if(sStack.empty() && !opens.empty())  // ^ is XOR operator
            return "NO";
    }

    return "YES";
}


int main(){

    // ---------- Easy (기본/엣지) ----------
    cout << solve("") << endl;                        // 빈 문자열(유효)
    cout << solve("()()") << endl;                    // ✅
    cout << solve("[]{}()") << endl;                  // ✅
    cout << solve("{[()]}") << endl;                  // ✅
    cout << solve("(") << endl;                       // ❌ 닫힘 없음
    cout << solve(")") << endl;                       // ❌ 열림 없이 닫힘
    cout << solve("(]") << endl;                      // ❌ 타입 불일치
    cout << solve("([)]") << endl;                    // ❌ 교차
    cout << solve("({[}])") << endl;                  // ❌ (요청 예시)
    cout << solve("({}[(){}])") << endl;              // ✅ (요청 예시)
    
    // ---------- Medium (혼합/살짝 함정) ----------
    cout << solve("(([]){})") << endl;                // ✅
    cout << solve("([]{})[]") << endl;                // ✅
    cout << solve("([{}]){}[()]") << endl;            // ✅
    cout << solve("([{}]))") << endl;                 // ❌ 하나 더 닫힘
    cout << solve("(([]])") << endl;                  // ❌ 내부 타입 불일치
    cout << solve("())(") << endl;                    // ❌ 순서 오류
    cout << solve("[]][[]") << endl;                  // ❌ 교차 + 순서 오류
    cout << solve("{{{{}}}}[[]]((()))") << endl;      // ✅
    cout << solve("{[()()]}[{}](()[])") << endl;      // ✅
    cout << solve("{[()(])}") << endl;                 // ❌ 미묘한 교차
    
    // ---------- Hard (깊은 중첩/긴 조합) ----------
    cout << solve("(((((((((())))))))))") << endl;    // ✅ 깊은 소괄호
    cout << solve("[[[[{{{(())}}}]]]]") << endl;      // ✅ 깊은 혼합
    cout << solve("{{[[(())]]}}[()()]") << endl;      // ✅
    cout << solve("{{[[(())]]}}[()()]]") << endl;     // ❌ 끝에서 1개 과다
    cout << solve("(((((([])))))){}[]") << endl;      // ✅
    cout << solve("((({[({[]})]})") << endl;         // ❌ 닫힘 부족
    cout << solve("){") << endl;                      // ❌ 첫 글자부터 닫힘
    cout << solve("()[{}]({[]})[({})]") << endl;      // ✅
    cout << solve("({)}") << endl;                    // ❌ 교차
    cout << solve("([]){}([{}])([]{})") << endl;      // ✅
    
    return 0;
}
